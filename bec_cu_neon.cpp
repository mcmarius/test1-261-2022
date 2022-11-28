//
// Created by marius on 31.10.2022.
//

#include "bec_cu_neon.h"

void bec_cu_neon::aprinde_() {
    std::cout << "flicare la inceput si apoi merge\n";
}

std::shared_ptr<bec> bec_cu_neon::clone() const {
    return std::make_shared<bec_cu_neon>(*this);
}
