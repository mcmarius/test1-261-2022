//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_CU_LED_H
#define OOP_BEC_CU_LED_H


#include "bec.h"


class bec_cu_led : public bec {
    std::string culoare = "albastru";
    int nr_folosiri = 0;
public:
    bec_cu_led(std::string x, int z);

    using bec::bec;

    void aprinde() override;
};


#endif //OOP_BEC_CU_LED_H
