//
// Created by marius on 31.10.2022.
//

#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H


#include <vector>
#include <ostream>
#include "bec.h"

class student {
    int nr_becuri_aprinse = 0;
    int xp = 1;
    const int id;
    static int id_max;
    std::vector<bec *> becuri;
public:
    void verifica(bec &bec_);

    explicit student(const std::vector<bec *>& becuri_) : id(id_max) {
        id_max++;
        for (const auto &bec: becuri_)
            becuri.push_back(bec->clone());
    }

    ~student() {
        for (auto &bec: becuri)
            delete bec;
    }

    student(const student &other) : nr_becuri_aprinse(other.nr_becuri_aprinse), xp(other.xp),
                                    id(id_max) {
        id_max++;
        for (const auto &bec: other.becuri)
            becuri.push_back(bec->clone());
        std::cout << "cc student\n";
    }

    student &operator=(student other) {
        std::cout << "op= stud\n";
        swap(*this, other);
        return *this;
    }

    friend void swap(student &st1, student &st2) {
        using std::swap;
        swap(st1.becuri, st2.becuri);
        swap(st1.nr_becuri_aprinse, st2.nr_becuri_aprinse);
        swap(st1.xp, st2.xp);
    }

    friend std::ostream &operator<<(std::ostream &os, const student &student);
};


#endif //OOP_STUDENT_H
