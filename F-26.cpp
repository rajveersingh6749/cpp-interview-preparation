/*
2. What is a default constructor?

✅ Explanation:
A default constructor is one with no parameters (either defined by the programmer or automatically created by the compiler).
*/

#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo() { x = 10; }  // default constructor
    void show() { cout << x; }
};

int main() {
    Demo d;
    d.show();
}

/*
🧩 Tip:
If you define any other constructor, C++ does not automatically create a default one.
*/