// 🧱 3. Pointers & References in C++

/*
1. What is a pointer?

✅ Explanation:
A pointer is a variable that stores the memory address of another variable.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // pointer stores address of a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr: " << ptr << endl;
    cout << "Value via ptr: " << *ptr << endl; // dereferencing
}

/*
🧩 Tip:
Use * to dereference (access value) and & to get address.
*/
