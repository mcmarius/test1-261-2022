//
// Created by marius on 28.11.2022.
//

#ifndef OOP_BEC_INCANDESCENT_H
#define OOP_BEC_INCANDESCENT_H


#include "bec.h"

class bec_incandescent : public bec {
private:
    int caldura;
    std::string abajur;

    void afis(std::ostream &os) const override;

protected:
    void aprinde_() override;

public:
    [[nodiscard]] std::shared_ptr<bec> clone() const override;

    bec_incandescent(int putere, int caldura, const std::string &abajur);

};


#endif //OOP_BEC_INCANDESCENT_H
