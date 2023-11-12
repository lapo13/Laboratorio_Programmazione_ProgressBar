//
// Created by Lapo Tinacci on 27/10/23.
//

#include "FileMover_Engine.h"

void Engine::Move() {
    max = files.size();
    for (auto &file : files) {
        progress++;
        file->rename(destinationPath);
        notify(progress, max);
    }
}

void Engine::setDestinationPath(std::string path) {
    destinationPath = path;
}

void Engine::setFiles(std::string name) {
    File* file = new file_obj(name);
    files.push_back(file);
}


void Engine::notify(int val, int range) {
    for (auto &observer : observers) {
        observer->update(val, range);
    }
}

void Engine::subscribe(Progressbar *o) {
    observers.push_back(o);
}

void Engine::unsubscribe(Progressbar *o) {
    observers.remove(o);
}