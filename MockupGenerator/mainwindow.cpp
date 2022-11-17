#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("MockupGenerator");
    bfileSelected = true;
    ui->leWidth->setValidator(new QIntValidator(0, 5000, this) );
    ui->leHeight->setValidator(new QIntValidator(0, 5000, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generatePixmap(QString filename)
{
    QImage image(filename);

    int width = image.width();
    int height = image.height();

    pQIMockup = new QImage(int(width * 2.3), height, QImage::Format_ARGB32);

    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
        {
            pQIMockup->setPixel(j, i, image.pixel(j, i));
        }

    // white space of 0.3 of total width
    for(int i = 0; i < height; i++)
    {
        for(int j = width; j < int(width * 1.3); j++)
        {
            pQIMockup->setPixel(j, i, qRgb(255, 255, 255));
        }
    }

    for(int i = 0; i < height; i++)
        for(int j = int(width * 1.3); j < int(2.3 * width); j++)
        {
            pQIMockup->setPixel(j, i, image.pixel(j - int(1.3 * width), i));
        }

    qpMockup = QPixmap::fromImage(*pQIMockup);
    qpMockup = qpMockup.scaled(outputWidth, outputHeight);
}

void MainWindow::on_openFile_clicked()
{
    bfileSelected = true;
    openFileName = QFileDialog::getOpenFileName(
            this,
            tr("Open Image"),
            QDir::currentPath(),
            tr("Image files (*.png *.jpg);;All files (*.*)")
    );

}

void MainWindow::on_openFolder_clicked()
{
    bfileSelected = false;
    openDirName = QFileDialog::getExistingDirectory(
                    this,
                    "Select Folder"
                );
    QDir directory(openDirName);

    openFileNames = directory.entryList(QStringList() << "*.jpg"<<"*.png"<<"*.PNG"<< "*.JPG",QDir::Files);
}


void MainWindow::on_save_clicked()
{
      saveDirName = QFileDialog::getExistingDirectory(
                this,
                "Select Folder"
      );
}


void MainWindow::on_generate_clicked()
{
    if(ui->leHeight->text().isEmpty() ||
       ui->leWidth->text().isEmpty())
    {
        QMessageBox::information(this, "warning", " Please input all necessary values! ");
        return;
    }

    outputHeight = ui->leHeight->text().toUInt();
    outputWidth = ui->leWidth->text().toInt();

    if(saveDirName.isNull()) // if the save folder isn't determined
    {
        QMessageBox::information(this, "warning", "Please specify the folder files to be saved!");
        return;
    }

    if(bfileSelected)  // file is selected, not folder
    {
        generatePixmap(openFileName);

        if(qpMockup.save(saveDirName + "\\new.jpg"))
        {
            QMessageBox::information(this, "alert", "Save success!");
        }
        else
        {
            QMessageBox::information(this, "alert", "Save failed!");
        }

        // make a zip file
        QString testZip = saveDirName + "\\new.zip";

        if(JlCompress::compressFile(testZip, saveDirName + "\\new.jpg"))
        {
            QMessageBox::information(this, "alert", "zip success!");
        }
        else
        {
            QMessageBox::information(this, "alert", "zip failure!");
        }
    }
    else    // folder is selected for the files to be saved
    {
        // save files
        foreach(QString filename, openFileNames)
        {
           generatePixmap(openDirName + "\\" + filename);

           if(!qpMockup.save(saveDirName + "\\" + filename))
           {
               QMessageBox::information(this, "alert", "Save failed!");
           }
        }

        // make a zip file
        QString testZip = saveDirName + "/new.zip";

        if(JlCompress::compressDir(testZip, saveDirName))
        {
            QMessageBox::information(this, "alert", "zip success!");
        }
        else
        {
            QMessageBox::information(this, "alert", "zip failure!");
        }
    }
}
