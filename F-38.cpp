/*
6. What is polymorphism?

✅ Explanation:
Polymorphism means “many forms” — it allows functions or objects to behave differently based on the type of object they’re dealing with.

Types:

Compile-time polymorphism → Function / Operator overloading

Runtime polymorphism → Virtual functions
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Bark\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Meow\n"; }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d; a->sound(); // Bark
    a = &c; a->sound(); // Meow
}

/*
🧩 Tip:
Polymorphism allows writing generic code that works on base class pointers.
*/