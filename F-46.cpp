// 7. Operator overloading using friend function

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    friend Complex operator + (const Complex& a, const Complex& b);
};

Complex operator + (const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

int main() {
    Complex c1(2,3), c2(1,4);
    Complex c3 = c1 + c2;
}

/*

8. Rules and Best Practices

✅ Always return by value or reference, depending on use.
✅ Prefer const correctness (const & parameters).
✅ Don’t overload operators without a clear intuitive meaning (e.g., don’t overload * to mean subtraction).
✅ Maintain operator symmetry where applicable (like a + b should behave the same as b + a).

Common Interview Follow-ups

💬 Q: What’s the difference between a member function and a friend function in operator overloading?
A:

    -Member → Left operand must be the class object.

    -Friend → Works when left operand is not your class (e.g., cout << obj).

💬 Q: Can we overload all operators?
A: No. Some (like . or ::) are part of the language syntax and cannot be overloaded.

💬 Q: Is operator overloading compile-time or runtime polymorphism?
A: Compile-time polymorphism.

*/