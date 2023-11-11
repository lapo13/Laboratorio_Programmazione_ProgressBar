// Created by Lapo Tinacci on 30/09/2020.
#include "FileMover_Engine.h"

int main(){
    FileMover *filemove = new Engine();
    filemove->setFiles("/Users/lapotinacci/Downloads/11.pdf");
    filemove->setDestinationPath("/Users/lapotinacci/Desktop/");
    filemove->Move();
    return 0;
}
