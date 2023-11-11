//
// Created by Lapo Tinacci on 10/11/23.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_OBSERVER_INT_H
#define LABORATORIO_PROGRAMMAZIONE_OBSERVER_INT_H

#endif //LABORATORIO_PROGRAMMAZIONE_OBSERVER_INT_H

class Observer{
public:
    virtual void update() = 0;
    virtual void attach() = 0;
    virtual void detach() = 0;
};

class Subject{
public:
    virtual void notify() = 0;
    virtual void subscribe(Observer *o) = 0;
    virtual void unsubscribe(Observer *o) = 0;
};