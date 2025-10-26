// 🧩 6. Operator Overloading in C++

/*
1. What is operator overloading?

✅ Explanation:
Operator overloading allows you to redefine the meaning of operators (like +, -, ==, [], etc.) for user-defined types (like classes or structs).
It gives your custom objects natural, readable syntax.
*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}

    // Overload '+' operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // c1.operator+(c2)
    c3.display();          // 4 + 6i
}

/*
🧩 Tip:
When you use obj1 + obj2, it internally calls:
obj1.operator+(obj2);
*/