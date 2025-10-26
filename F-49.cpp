// 3. Class Template

#include <iostream>
using namespace std;

// Class template
template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    T add() { return a + b; }
    T subtract() { return a - b; }
};

int main() {
    Calculator<int> c1(5, 3);
    cout << "Sum = " << c1.add() << ", Diff = " << c1.subtract() << endl;

    Calculator<double> c2(5.5, 1.1);
    cout << "Sum = " << c2.add() << ", Diff = " << c2.subtract() << endl;
}

/*
✅ Explanation:
Class templates let you define generic classes that can store and operate on any data type.
*/