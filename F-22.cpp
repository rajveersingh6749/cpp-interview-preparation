/*
5. What is a function pointer?

✅ Explanation:
A function pointer stores the address of a function and can be used to call it.
*/

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from function pointer!";
}

int main() {
    void (*funcPtr)();  // declare function pointer
    funcPtr = &greet;   // assign address
    funcPtr();          // call function
}

/*
🧩 Tip:
Function pointers are used in callbacks, event handling, and function tables.
*/