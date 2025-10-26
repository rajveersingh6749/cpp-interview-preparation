/*
2. What is the difference between free() and delete?

✅ Explanation:

    -free() → used for memory allocated by malloc().

    -delete → used for memory allocated by new.

    delete also calls the destructor of an object.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Test {
public:
    Test() { cout << "Object created\n"; }
    ~Test() { cout << "Object destroyed\n"; }
};

int main() {
    Test* obj1 = (Test*)malloc(sizeof(Test));
    free(obj1);  // No destructor

    Test* obj2 = new Test();
    delete obj2; // Destructor called
}
