//
// Created by marius on 31.10.2022.
//

#include "student.h"
#include "exceptii.h"

int student::id_max = 1;

void student::verifica(bec &bec_) {
    bec_.aprinde();
    bec_.aprinde();
    bec_.aprinde();
    nr_becuri_aprinse += 3;
    if (nr_becuri_aprinse % 10 == 0)
        xp++;
    if (xp % 5 == 3 || nr_becuri_aprinse > 4)
        throw eroare_lipsa_chef("prea greu");
}


std::ostream &operator<<(std::ostream &os, const student &student) {
    os << "nr_becuri_aprinse: " << student.nr_becuri_aprinse << " xp: " << student.xp << " id: " << student.id
       << " becuri: ";
    for (const auto * const bec : student.becuri)
        os << *bec << "\n";
    return os;
}
