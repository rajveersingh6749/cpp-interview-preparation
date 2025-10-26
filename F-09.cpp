/*
9. What is the difference between global and local variables?

Answer:

    -Local variables → declared inside a function/block, exist only there.

    -Global variables → declared outside any function, accessible throughout.
*/

#include <iostream>
using namespace std;

int g = 10; // global

int main() {
    int g = 5; // local (shadows global)
    cout << "Local: " << g << ", Global: " << ::g; // :: accesses global
}
