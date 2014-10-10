#include <QCoreApplication>
#include <QDebug>
#include <Qdir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QDir mDir("/");
    //mDir.exists();


    /* * * * Directories * * * */
    QDir directory("/storage");

    qDebug() << "\nFiles & Directories: \n- - - - - - - - - - ";
    foreach(QFileInfo fileNFO, directory.entryInfoList()) {
        if(fileNFO.isDir()) qDebug() << "Dir: " << fileNFO.absoluteFilePath();
        if(fileNFO.isFile()) qDebug() << "File: " << fileNFO.absoluteFilePath();
    }

    /* * * * Harddrives * * * */
    QDir drives;

    qDebug() << "\nHarddrives: \n- - - - - - - - - - ";
    foreach(QFileInfo fileNFO, drives.drives()) {
        int a = a + 1;
        qDebug() << "Drive" << a << ": " << fileNFO.absoluteFilePath();
    }

    /* * * * Create / Exists? - Directories * * * */
    QDir dir;
    QString path = "/storage/";

    qDebug() << "\nExists / Or not Exists, that's the question.\n- - - - - - - - - - ";
    if(!dir.exists(path)) {
        qDebug() << "The path '" << path <<"' doesn't exist'";
    } else {
        qDebug() << "The path '" << path <<"' does exist'";
    }

    /* * * * Home Directory * * * */
    QString homePath;
    QDir homeDir;

    homePath = dir.homePath();
    homeDir = dir.home();

    qDebug() << "\nHome Directory: \n- - - - - - - - - - ";
    qDebug() << homePath;

    qDebug() << "\nHome Directory Entries: \n- - - - - - - - - - ";
    foreach(QFileInfo fileNFO, homeDir.entryInfoList()) {
        qDebug() << "absoluteFilePath" << fileNFO.absoluteFilePath();
        qDebug() << "absolutePath" << fileNFO.absolutePath();
        qDebug() << "absoluteDir" << fileNFO.absoluteDir();
        qDebug() << "basename" << fileNFO.baseName();
        qDebug() << "canonicalPath" << fileNFO.canonicalPath();

        qDebug() << "\n";
    }
    return a.exec();
}
