/*

5. Overloading << and >> operators (for I/O)

To use cout << obj; and cin >> obj;, we cannot make them member functions because the left operand (cout / cin) is not an object of your class.
So, they must be friend functions.

*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}

    // Friend function for output
    friend ostream& operator << (ostream& out, const Complex& c);
    // Friend function for input
    friend istream& operator >> (istream& in, Complex& c);
};

ostream& operator << (ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator >> (istream& in, Complex& c) {
    in >> c.real >> c.imag;
    return in;
}

int main() {
    Complex c1;
    cout << "Enter real and imaginary parts: ";
    cin >> c1;
    cout << "You entered: " << c1 << endl;
}

/*
🧩 Tip:
For chaining like cout << a << b;, you must return the stream reference.
*/