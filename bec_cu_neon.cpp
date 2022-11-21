//
// Created by marius on 31.10.2022.
//

#include "bec_cu_neon.h"

void bec_cu_neon::aprinde() {
    std::cout << "flicare la inceput si apoi merge\n";
}

bec *bec_cu_neon::clone() {
    return new bec_cu_neon(*this);
}
