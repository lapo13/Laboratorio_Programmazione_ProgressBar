// Created by Lapo Tinacci on 30/09/2020.
#include "FileMover_Engine.h"
#include <QVBoxLayout>
#include <QApplication>
#include <QMainWindow>
#include <QButtonGroup>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QMainWindow *window = new QMainWindow;
    window->setWindowTitle("FileMover");
    window->setFixedSize(500, 80);

    QButtonGroup *buttonGroup = new QButtonGroup(window);
    buttonGroup->setExclusive(true);

    Subject *filemove = new Engine();

    Progressbar *bar = new BarObserver();
    bar ->setGeometry(10, 10, 400, 30);
    window->setCentralWidget(bar);

    filemove->subscribe(bar);
    window->show();
    app.exec();

    filemove->setFiles("/Users/lapotinacci/Downloads/11.pdf");
    filemove->setDestinationPath("/Users/lapotinacci/Desktop/");
    filemove->Move();

    app.quit();
    return 0;
}
