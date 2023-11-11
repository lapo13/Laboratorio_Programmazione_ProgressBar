//
// Created by Lapo Tinacci on 11/11/23.
//
#include "file_obj.h"

file_obj::file_obj(std::string file) {
    name = file;
    setall();
}

void file_obj::setall(){
    int strlength = static_cast<int>(name.length())-1;
    int lastslash = static_cast<int>(name.find_last_of('/'))+1;
    if (lastslash != strlength) {
        path = name.substr(0, lastslash);
        subname = name.substr(lastslash, strlength);
    }
}

void file_obj::rename(std::string new_path) {
    if (new_path != path) {
        path = new_path;
        std::rename(name.c_str(), (path + subname).c_str());
        name = path + subname;
    }
}