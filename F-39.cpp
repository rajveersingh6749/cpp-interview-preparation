// 7. Example: Demonstrate function overriding using inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() { cout << "Vehicle starting...\n"; }
};

class Car : public Vehicle {
public:
    void start() override { cout << "Car starting...\n"; }
};

int main() {
    Vehicle* v = new Car();
    v->start(); // Output: Car starting...
    delete v;
}

/*
Interview Recap:

💡 Common follow-ups:

What is the difference between abstract class and interface in C++?
→ C++ doesn’t have “interface” keyword; an abstract class with only pure virtual functions behaves like an interface.

What happens if a base class destructor isn’t virtual?
→ Derived destructor won’t be called → memory leak.

Can constructors be virtual?
→ ❌ No, only destructors can be virtual.
*/