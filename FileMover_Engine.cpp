//
// Created by Lapo Tinacci on 27/10/23.
//

#include "FileMover_Engine.h"

void Engine::Move() {
    int i = 0;
    for (auto &file : files) {
        QFile::rename(sourcePath + "/" + file, destinationPath + "/" + file);
        i++;
        std::cout << "File " << i << " of " << files.size() << " moved" << std::endl;
    }
}

void Engine::setSourcePath(QString path) {
    sourcePath = path;
}

void Engine::setDestinationPath(QString path) {
    destinationPath = path;
}

void Engine::setFiles(QString file) {
    files.push_back(file);
}