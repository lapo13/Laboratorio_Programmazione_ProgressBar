//
// Created by Lapo Tinacci on 27/10/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#define LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#endif //LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#include <iostream>
#include "file_obj.h"
#include <list>

class FileMover{
public:
    virtual void Move() = 0;
    virtual void setDestinationPath(std::string path) = 0;
    virtual void setFiles(std::string file) = 0;

    virtual ~FileMover() = default;

protected:
    std::string  destinationPath;
    std::list<File*> files;
};

class Engine: public FileMover{
public:
    Engine() = default;

    void Move() override;
    void setDestinationPath(std::string path) override;
    void setFiles(std::string file) override;

    ~Engine() override = default;
};