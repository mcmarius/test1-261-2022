//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_H
#define OOP_BEC_H


#include <string>
#include <iostream>
#include <memory>

class bec {
protected:
    int putere = 50;

    virtual void aprinde_();

    bec(const bec &other);

    bec &operator=(const bec &other);

private:
    int intensitate = 80;
    std::string marca = "n/a";

    virtual void afis(std::ostream &os) const;

public:
    bec() = default;

    explicit bec(int putere_);

    bec(int putere, int intensitate, const std::string &marca);

    virtual ~bec();

    friend std::ostream &operator<<(std::ostream &os, const bec &bec);

    void aprinde() {
        std::cout << "se aprinde așa și așa\n";
        aprinde_();
    }

    [[nodiscard]] virtual std::shared_ptr<bec> clone() const = 0;

    const std::string &getMarca() const;

    int getIntensitate() const;
};


#endif //OOP_BEC_H
