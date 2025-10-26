/*
7. What is a destructor?

✅ Explanation:
A destructor is a special function automatically called when an object goes out of scope or is deleted.
It cleans up resources like memory or files.
*/

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {
    Demo d; // constructor called
}           // destructor called automatically


/*
🧩 Tip:

    -Destructors have the same name as the class but prefixed with ~.

    -They cannot be overloaded.

    -Use them to release dynamically allocated memory.
*/