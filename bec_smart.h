//
// Created by marius on 31.10.2022.
//

#ifndef OOP_BEC_SMART_H
#define OOP_BEC_SMART_H


#include "bec.h"

class bec_smart : public virtual bec {
public:
    std::shared_ptr<bec> clone() const override;

protected:
    void aprinde_() override;
};


#endif //OOP_BEC_SMART_H
