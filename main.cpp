// Created by Lapo Tinacci on 30/09/2020.
#include "FileMover_Engine.h"
#include <QVBoxLayout>
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QMainWindow *window = new QMainWindow;
    window->setWindowTitle("FileMover");
    window->setGeometry(100, 100, 500, 100);


    Subject *filemove = new Engine();

    /*Progressbar *bar = new BarObserver();
    bar->setGeometry(0, 0, 500, 100);

    filemove->subscribe(bar);

    layout->addWidget(bar);*/

    filemove->setFiles("/Users/lapotinacci/Downloads/11.pdf");
    filemove->setDestinationPath("/Users/lapotinacci/Desktop/");
    filemove->Move();

    window->show();

    return 0;
}
