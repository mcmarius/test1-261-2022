//
// Created by marius on 28.11.2022.
//

#include "bec_incandescent.h"

std::shared_ptr<bec> bec_incandescent::clone() const {
    return std::make_shared<bec_incandescent>(*this);
}

bec_incandescent::bec_incandescent(int putere_, int caldura_, const std::string &abajur_) : bec(putere_),
                                                                                            caldura(caldura_),
                                                                                            abajur(abajur_) {}

void bec_incandescent::afis(std::ostream &os) const {
    os << "caldura: " << caldura << ", abajur: " << abajur << "\n";
}

void bec_incandescent::aprinde_() {
    caldura += 55;
    std::cout << "abajurul face brr\n";
}
