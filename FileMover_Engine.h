//
// Created by Lapo Tinacci on 27/10/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H
#define LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#endif //LABORATORIO_PROGRAMMAZIONE_FILEMOVER_ENGINE_H

#include "file_obj.h"
#include "ProgressBar.h"

class FileMover{
public:
    virtual void Move() = 0;
    virtual void setDestinationPath(std::string path) = 0;
    virtual void setFiles(std::string file) = 0;

    virtual ~FileMover() = default;
};

class Subject : public FileMover{
public:
    virtual void notify(int val, int range) = 0;
    virtual void subscribe(Progressbar *o) = 0;
    virtual void unsubscribe(Progressbar *o) = 0;

protected:
    std::list<Progressbar*> observers;
};

class Engine: public Subject{
public:
    Engine() = default;

    void Move() override;
    void setDestinationPath(std::string path) override;
    void setFiles(std::string file) override;

    void notify(int val, int range) override;
    void subscribe(Progressbar *o) override;
    void unsubscribe(Progressbar *o) override;

    ~Engine() override = default;

private:
    std::string  destinationPath;
    std::list<File*> files;
    int max;
    int progress;
};