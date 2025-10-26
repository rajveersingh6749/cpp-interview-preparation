// 🧩 5. Inheritance & Polymorphism (Applied)

/*
1. What is inheritance?

✅ Explanation:
Inheritance allows one class (child) to use the properties and behaviors of another class (parent).
It promotes code reusability and hierarchical relationships.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal { // Dog inherits from Animal
public:
    void bark() { cout << "Barking...\n"; }
};

int main() {
    Dog d;
    d.eat();  // inherited function
    d.bark(); // own function
}

/*
🧩 Tip:
Types of inheritance:

Single

Multiple

Multilevel

Hierarchical

Hybrid
*/