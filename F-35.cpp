/*
3. What is a virtual function? How is it different from a normal function?

✅ Explanation:
A virtual function is a base class function that can be overridden in derived classes and is resolved at runtime (dynamic dispatch).
Normal functions are resolved at compile time (static binding).
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class\n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class\n"; }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;

    ptr->show(); // Output: Derived class (runtime polymorphism)
}

/*
🧩 Tip:
Virtual functions use a vtable (virtual table) internally for dynamic dispatch.
*/