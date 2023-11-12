//
// Created by Lapo Tinacci on 12/11/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_PROGRESSBAR_H
#define LABORATORIO_PROGRAMMAZIONE_PROGRESSBAR_H

#endif //LABORATORIO_PROGRAMMAZIONE_PROGRESSBAR_H
#include <QProgressBar>
#include <iostream>


class Progressbar: public QProgressBar{
public:

    virtual void update(int val, int maximum) = 0;

    virtual ~Progressbar() = default;
};

class BarObserver: public Progressbar{
public:
    BarObserver() = default;

    void update(int val, int maximum) override;

    ~BarObserver() override = default;
};