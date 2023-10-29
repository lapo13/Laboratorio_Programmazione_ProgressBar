// Created by Lapo Tinacci on 30/09/2020.
#include "FileMover_Engine.h"

int main(){
    FileMover *filemove = new Engine();
    filemove->setSourcePath("/Users/lapotinacci/Downloads");
    filemove->setDestinationPath("/Users/lapotinacci/Desktop");
    filemove->setFiles("11.pdf");
    filemove->Move();
    return 0;
}
