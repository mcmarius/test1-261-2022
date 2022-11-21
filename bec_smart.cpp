//
// Created by marius on 31.10.2022.
//

#include "bec_smart.h"

void bec_smart::aprinde() {
    std::cout << "Alexa™ is offline\n";
}

bec *bec_smart::clone() {
    return new bec_smart(*this);
}
