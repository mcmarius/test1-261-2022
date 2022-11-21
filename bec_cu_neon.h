//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_CU_NEON_H
#define OOP_BEC_CU_NEON_H


#include <iostream>
#include "bec.h"

class bec_cu_neon : public bec {
public:
    void aprinde() override;

    bec *clone() override;
};


#endif //OOP_BEC_CU_NEON_H
