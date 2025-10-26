/*
4. What is pointer to pointer?

✅ Explanation:
A pointer to pointer stores the address of another pointer.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* p = &x;    // pointer to int
    int** pp = &p;  // pointer to pointer

    cout << "Value of x: " << **pp;  // dereference twice
}

/*
🧩 Tip:
Used in multi-dimensional arrays, dynamic structures, and function arguments.
*/
