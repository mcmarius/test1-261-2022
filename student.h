//
// Created by marius on 31.10.2022.
//

#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H


#include "bec.h"

class student {
    int nr_becuri_aprinse = 0;
    int xp = 1;
    const int id;
    static int id_max;
public:
    void verifica(bec &bec_);

    student();

    student(const student &other) : nr_becuri_aprinse(other.nr_becuri_aprinse), xp(other.xp),
                                    id(id_max) {
        id_max++;
    }

    student &operator=(const student &other) {
        std::cout << "op= stud\n";
        nr_becuri_aprinse = other.nr_becuri_aprinse;
        xp = other.xp;
        return *this;
    }
};


#endif //OOP_STUDENT_H
