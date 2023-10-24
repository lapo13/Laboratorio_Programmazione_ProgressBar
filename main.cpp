#include <QApplication>
#include <QWidget>
#include <QProgressBar>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QVBoxLayout>
#include "FileMover_Engine.h"

int main(){
    FileMover *filemove = new FileMover();
    filemove->setSourcePath("/Users/lapotinacci/Downloads/Confronto tra algoritmi.xlsx");
    filemove->setDestinationPath("/Users/lapotinacci/Desktop/Confronto tra algoritmi.xlsx");
    filemove->Move();
    return 0;
}
