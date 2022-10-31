//
// Created by marius on 31.10.2022.
//

#include "bec_cu_led.h"

bec_cu_led::bec_cu_led(std::string x, int z) : bec(), culoare(x),
                                               nr_folosiri(z) {}

void bec_cu_led::aprinde() {
    std::cout << "se aprinde cu culoarea "
              << culoare << "\n";
}
