/*
5. Why is a virtual destructor needed?

✅ Explanation:
If a base class pointer points to a derived class object, and you delete it,
a non-virtual destructor will only call the base destructor, skipping the derived one → memory leak.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor\n"; }
    virtual ~Base() { cout << "Base destructor\n"; } // virtual
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Base* obj = new Derived();
    delete obj; // Calls both destructors (Derived → Base)
}

/*
🧩 Tip:
Always make destructors virtual if your class is intended for inheritance.
*/