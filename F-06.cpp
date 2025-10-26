/*
6. What are default arguments in functions?

Answer:
When no argument is passed, default values are used.
*/

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!";
}

int main() {
    greet();          // uses default
    greet("Rajveer"); // custom
}
