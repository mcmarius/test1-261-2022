//
// Created by marius on 28.11.2022.
//

#ifndef OOP_BEC_SMART_CU_NEON_H
#define OOP_BEC_SMART_CU_NEON_H


#include "bec_cu_neon.h"
#include "bec_smart.h"

class bec_smart_cu_neon : public bec_cu_neon, public bec_smart {
protected:
    void aprinde_der() override {
        bec_cu_neon::aprinde_der();
        bec_smart::aprinde_der();
    }

public:
    void f() {
        std::cout << putere;
    }


    bec *clone() override {
        return new bec_smart_cu_neon(*this);
    }
};


#endif //OOP_BEC_SMART_CU_NEON_H
