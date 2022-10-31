#include <iostream>
#include "bec_cu_led.h"
#include "bec_cu_neon.h"
#include "student.h"


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

int main() {
    bec_cu_led bl1;
    bec_cu_neon bn1;
    student st1;
    st1.verifica(bl1);
    st1.verifica(bn1);


    return 0;
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
}
