#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QList>
#include <QFileDialog>
#include <QDebug>
#include <QStringList>
#include <QDir>
#include <QImage>
#include <QPixmap>
#include <QMessageBox>
#include "quazip/quazip/073/JlCompress.h"
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void generatePixmap(QString);

private:
    QString openFileName;   // a single file name
    QStringList openFileNames;  // list of file names
    QString openDirName;
    QImage *pQIMockup;
    QPixmap qpMockup;
    QString saveDirName;
    bool bfileSelected;
    int outputWidth;
    int outputHeight;

private slots:

    void on_openFile_clicked();  // When the user clicks "open file"
    void on_openFolder_clicked();  // "open folder"
    void on_save_clicked();      //  "Save" specify the folder where a zip file is saved
    void on_generate_clicked();   // Start "generation"

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
