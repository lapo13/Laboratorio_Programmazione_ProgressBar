//
// Created by Lapo Tinacci on 27/10/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#define LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#endif //LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#include <QApplication>
#include <QDir>
#include <QFile>
#include <iostream>

class FileMover {
private:
    QString sourcePath;
    QString fileName;
    QString destinationPath;
    QDir sourceFile;

public:
    FileMover() = default;
    ~FileMover() = default;

    const QString &getSourcePath() const {
        return sourcePath;
    }

    void setSourcePath(const QString &sourcePath) {
        FileMover::sourcePath = sourcePath;
    }

    const QString &getDestinationPath() const {
        return destinationPath;
    }

    void setDestinationPath(const QString &destinationPath) {
        FileMover::destinationPath = destinationPath;
    }

    void Move();
};