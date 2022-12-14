//
// Created by marius on 31.10.2022.
//

#include "bec_cu_led.h"
#include "exceptii.h"

bec_cu_led::bec_cu_led(const std::string &cul, int nr) : bec(), culoare(cul),
                                                         nr_folosiri(nr) {
    if (nr_folosiri > 30 && putere < 80)
        throw eroare_putere(std::string("o sa se arda"));
}

void bec_cu_led::afis(std::ostream &os) const {
    os << "\t\tbec cu led: " << culoare << " " << nr_folosiri << "\n";
}

void bec_cu_led::aprinde_() {
    ++nr_folosiri;
    std::cout << "se aprinde cu culoarea "
              << culoare << " (" << nr_folosiri << ")\n";
}

std::shared_ptr<bec> bec_cu_led::clone() const {
    return std::make_shared<bec_cu_led>(*this);
}
