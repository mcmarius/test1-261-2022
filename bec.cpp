//
// Created by marius on 31.10.2022.
//

#include "bec.h"

bec::bec(int putere_) : putere(putere_) {}

bec::bec(int putere, int intensitate, const std::string &marca) : putere(putere), intensitate(intensitate),
                                                                  marca(marca) {}

bec::bec(const bec &other) : putere(other.putere),
                             intensitate(other.intensitate),
                             marca(other.marca) {
    std::cout << "cc bec\n";
}

bec &bec::operator=(const bec &other) {
    std::cout << "op= bec\n";
    putere = other.putere;
    intensitate = other.intensitate;
    marca = other.marca;
    return *this;
}

bec::~bec() {
    std::cout << "destr bec\n";
}

std::ostream &operator<<(std::ostream &os, const bec &bec) {
    os << "putere: " << bec.putere
       << " intensitate: " << bec.intensitate
       << " marca: " << bec.marca << "\n";
    return os;
}
