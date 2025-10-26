/*
6. What are initializer lists in constructors?

✅ Explanation:
An initializer list initializes class members before the constructor body executes.
It’s more efficient, especially for const or reference members.
*/

#include <iostream>
using namespace std;

class Demo {
    const int x;
    int& y;
public:
    Demo(int val) : x(val), y(*(new int(val))) {  // initializer list
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Demo d(10);
}

/*
🧩 Tip:
Use initializer lists when:

    -Members are const or reference.

    -Member class has no default constructor.

    -It improves performance.
*/