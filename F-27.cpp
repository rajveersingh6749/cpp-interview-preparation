/*
3. What is a copy constructor?

✅ Explanation:
A copy constructor creates a new object as a copy of an existing object.
*/

#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int val) { x = val; }
    Demo(const Demo &obj) {  // copy constructor
        x = obj.x;
        cout << "Copy constructor called\n";
    }
    void show() { cout << x << endl; }
};

int main() {
    Demo d1(100);
    Demo d2 = d1; // invokes copy constructor
    d2.show();
}

/*
🧩 Tip:
If you don’t define one, the compiler generates a shallow copy constructor by default.
*/