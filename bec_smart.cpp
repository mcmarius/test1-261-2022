//
// Created by marius on 31.10.2022.
//

#include "bec_smart.h"

void bec_smart::aprinde_() {
    std::cout << "Alexa™ is offline\n";
}

std::shared_ptr<bec> bec_smart::clone() const {
    return std::make_shared<bec_smart>(*this);
}
