#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived class";
    }
};

