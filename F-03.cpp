/*
3. What is a namespace? Why do we use std::?

Answer:
A namespace is used to avoid name conflicts.
std is the namespace where C++ Standard Library is defined.
*/

#include <iostream>
using namespace std;  // or use std::cout manually

namespace mySpace {
    int value = 100;
}

int main() {
    cout << "Standard namespace output\n";
    cout << mySpace::value;
}
