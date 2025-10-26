/*
4. What is a pure virtual function?

✅ Explanation:
A pure virtual function is a virtual function with no definition in the base class.
It makes the class abstract, meaning you can’t instantiate it directly.
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle\n"; }
};

int main() {
    // Shape s; // ❌ Error: Cannot instantiate abstract class
    Circle c;
    c.draw(); // ✅
}

/*
🧩 Tip:
Any class with at least one pure virtual function is an abstract class.
*/