//
// Created by Lapo Tinacci on 11/11/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_FILE_OBJ_H
#define LABORATORIO_PROGRAMMAZIONE_FILE_OBJ_H

#endif //LABORATORIO_PROGRAMMAZIONE_FILE_OBJ_H

#include <string>

class File{
public:
    std::string getName() const { return name; }
    virtual void rename(std::string path) = 0;

    virtual ~File() = default;

protected:
    std::string name;
};



class file_obj : public File{
public:
    explicit file_obj(std::string file);

    void rename(std::string path) override;
    void setall();

    ~file_obj() override = default;

private:
    std::string path;
    std::string subname;
};