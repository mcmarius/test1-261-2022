//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_CU_LED_H
#define OOP_BEC_CU_LED_H


#include "bec.h"


class bec_cu_led : public bec {
    std::string culoare = "albastru";
    int nr_folosiri = 0;

    void aprinde_der() override;
public:

    bec_cu_led(const std::string &cul, int nr);

    bec *clone() override;

    using bec::bec;

protected:
    void afis(std::ostream &os) const override;
};


#endif //OOP_BEC_CU_LED_H
