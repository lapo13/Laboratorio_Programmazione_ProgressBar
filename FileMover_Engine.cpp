//
// Created by Lapo Tinacci on 27/10/23.
//

#include "FileMover_Engine.h"

void Engine::Move() {
    for (auto &file : files) {
        std::cout<< file->getName() << std::endl;
        file->rename(destinationPath);
        std::cout<< file->getName() << std::endl;
    }
}

void Engine::setDestinationPath(std::string path) {
    destinationPath = path;
}

void Engine::setFiles(std::string name) {
    File* file = new file_obj(name);
    files.push_back(file);
}