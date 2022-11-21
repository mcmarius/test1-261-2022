//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_H
#define OOP_BEC_H


#include <string>
#include <iostream>

class bec {
    int putere = 50;
    int intensitate = 80;
    std::string marca = "n/a";
public:
    bec() = default;

    explicit bec(int putere_);

    bec(int putere, int intensitate, const std::string &marca);

    virtual ~bec();

    friend std::ostream &operator<<(std::ostream &os, const bec &bec);

    virtual void aprinde() {
        std::cout << "se aprinde așa și așa\n";
    }

    virtual bec *clone() = 0;

protected:
    bec(const bec &other);

    bec &operator=(const bec &other);
};


#endif //OOP_BEC_H
