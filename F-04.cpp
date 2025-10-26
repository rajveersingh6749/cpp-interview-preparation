/*
4. What is the difference between pass by value and pass by reference?

Answer:

    -Pass by value → copy of data is passed.

    -Pass by reference → actual reference (address) is passed.
*/

#include <iostream>
using namespace std;

void byValue(int x) { x += 5; }
void byReference(int &x) { x += 5; }

int main() {
    int a = 10, b = 10;
    byValue(a);
    byReference(b);
    cout << "a = " << a << ", b = " << b;  // a=10, b=15
}
