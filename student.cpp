//
// Created by marius on 31.10.2022.
//

#include "student.h"

void student::verifica(bec &bec_) {
    bec_.aprinde();
    bec_.aprinde();
    bec_.aprinde();
    nr_becuri_aprinse += 3;
    if (nr_becuri_aprinse % 10 == 0)
        xp++;
}
