//
// Created by Lapo Tinacci on 12/11/23.
//

#include "ProgressBar.h"

void BarObserver::update(int val, int range) {
    std::cout << "Observer push called "<< std::endl;
    if (this->maximum() != range)
        this -> setMaximum(range);
    this -> setValue(val);
    std::cout << "value: " << this->value() << std::endl;
    std::cout << "maximum: " << this->maximum() << std::endl;
}



