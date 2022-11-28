#include <iostream>
#include "bec_cu_led.h"
#include "bec_cu_neon.h"
#include "student.h"
#include "bec_smart.h"
#include "exceptii.h"
#include "bec_smart_cu_neon.h"

//void f(student& st) {
//    st.xp
//}

/*
class Empty {
};


class cls {
    void f1() {}

    void f2() {}

    void f3() {}
};

class cls1 {
    char t;
    int u;
    double v;
    char w;
    long long x;
};

class cls2 {
    char t;
    char w;
    int u;
    double v;
    long long x;
};

class cls3 {
    double v;
    long long x;
    int u;
    char t;
    char w;
};


class curs_nv1 {
};

class curs_nv2 {
public:
    void f() {}
};

class curs_v1 {
public:
    virtual void f() {}
};

class curs_v2 {
public:
    virtual void f() {}

    virtual void g() {}

    virtual void g2() {}

    virtual void g3() {}

    virtual void g4() {}

    virtual void g5() {}

    virtual void g6() {}

    virtual void g7() {}

    virtual void g8() {}

    virtual void g9() {}

    virtual void g10() {}

    virtual void g11() {}

    virtual void g12() {}

    virtual void g13() {}

    virtual void g14() {}

    virtual void g15() {}
};


class baza {
public:
    virtual void f() { std::cout << "f baza\n"; }
};

class derivata : public baza {
public:
    void f() {
        baza::f();
        std::cout << "f derivata\n";
    }
};

void g1(baza &b) {
    b.f();
}

void g2(baza *b) {
    b->f();
}

void h(baza b) {
    b.f();
}
*/

void ceva(bec &b) {
//    std::cout << "în funcția ceva\n";
//    b.aprinde();
    auto copie = b.clone();
    std::cout << "adr b: " << &b << "\n";
    b.aprinde();
    if (b.getMarca() == "benq" || b.getIntensitate() > 44)
        throw eroare_defect_fabrica("hopa...");
    std::cout << "adr copie: " << copie << "\n";
    copie->aprinde();
}

//bec* copie(bec& other) {
//    if(other.get_tip() == "cu led")
//        return new bec_cu_led(???);
//    else if(other.get_tip() == "cu neon")
//        return new bec_cu_neon(???);
//    /// etc
//}


int main() {
    using namespace std::string_literals;
//    int x123;
//    std::cin >> x123;
//    std::cout << "am citit " << x123 << "\n";
    bec_cu_led bl1{};
    bec_cu_neon bn1;
    bec_smart bs1;
    auto vec = {bl1.clone(), bs1.clone(), bn1.clone()};
    student st1{vec};

    std::cout << "-------------------\n";
    bec_smart_cu_neon becSmartCuNeon;
    becSmartCuNeon.aprinde();
    std::cout << "-------------------\n";
//    st1.verifica(bl1);
//    st1.verifica(bn1);
//    st1.verifica(bs1);
//    bec b1;
//    ceva(b1);
//    ceva(bl1);

    try {
        std::cout << st1;
        bec_cu_led bl2{"portocaliu"s, 90};
        st1.verifica(bl2);
        ceva(bl1);
        ceva(bl2);
    } catch (eroare_lipsa_chef &err) {
        std::cout << "daca nici voi nu mai aveti chef..." << err.what() << "\n";
    } catch (eroare_aplicatie &err) {
        std::cout << err.what() << "\n";
    }

    student st2{{}};
    st2 = st1;
    return 0;

/*
    baza b;
    derivata d;
//    d.baza::f();
    std::cout << "----- g1(b) -----\n";
    g1(b);
    std::cout << "----- g2(&b) -----\n";
    g2(&b);
    std::cout << "----- h(b) -----\n";
    h(b);
    std::cout << "----- g1(d) -----\n";
    g1(d);
    std::cout << "----- g2(&d) -----\n";
    g2(&d);
    std::cout << "----- h(d) -----\n";
    h(d);
//}

    return 0;
//
//int main() {
    std::cout << "sizeof(curs_nv1): " << sizeof(curs_nv1) << "\n";
    std::cout << "sizeof(curs_nv2): " << sizeof(curs_nv2) << "\n";
    std::cout << "sizeof(curs_v1): " << sizeof(curs_v1) << "\n";
    std::cout << "sizeof(curs_v2): " << sizeof(curs_v2) << "\n";


    std::cout << "sizeof(cls1): " << sizeof(cls1) << "\n";

    std::cout << "sizeof(cls2): " << sizeof(cls2) << "\n";
    std::cout << "sizeof(cls3): " << sizeof(cls3) << "\n";
    std::cout << "sizeof(cls): " << sizeof(cls) << "\n";
    return 0;
//    Empty a, b;
//    if (&a == &b)
//        std::cout << "impossible: report error to compiler supplier";

    bec_cu_led bl11{10, 120, "test"};
//    bec b0;

//    bec b1{10, 100, "asd"},
//        b2{12, 123, "qwerty"};

//    std::cout << b1 << b2;
//    (b1 = b2).aprinde();
//    std::cout << b1 << b2;

    int x, y;
    x = 1;
    y = 2;
    (x = y)++;
    std::cout << "x este " << x << ", y este " << y << "\n";
    return 0;
    */
}
