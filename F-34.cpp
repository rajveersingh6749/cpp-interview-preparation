/*
2. What is function overriding?

✅ Explanation:
When a derived class provides its own implementation of a function that exists in the base class with the same name and parameters.
*/

#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base class function\n"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class function\n"; }
};

int main() {
    Derived d;
    d.show(); // Derived version hides Base version
}

/*
🧩 Tip:
If you want runtime overriding, you must make the base function virtual (see next).
*/