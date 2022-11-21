//
// Created by marius on 21.11.2022.
//

#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H

#include <stdexcept>

class eroare_aplicatie : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class eroare_putere : public eroare_aplicatie {
    using eroare_aplicatie::eroare_aplicatie;
};

class eroare_lipsa_chef : public eroare_aplicatie {
    using eroare_aplicatie::eroare_aplicatie;
};

class eroare_defect_fabrica : public eroare_aplicatie {
    using eroare_aplicatie::eroare_aplicatie;
};

#endif //OOP_EXCEPTII_H
