//
// Created by Lapo Tinacci on 27/10/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#define LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#endif //LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#include <QApplication>
#include <QFile>
#include <iostream>

class FileMover{
public:
    virtual void Move() = 0;
    virtual void setSourcePath(QString path) = 0;
    virtual void setDestinationPath(QString path) = 0;
    virtual void setFiles(QString file) = 0;

protected:
    QString sourcePath;
    QString destinationPath;
    std::list<QString> files;
};

class Engine: public FileMover{
public:
    Engine() = default;
    void Move() override;
    void setSourcePath(QString path) override;
    void setDestinationPath(QString path) override;
    void setFiles(QString file) override;
};