/*
2. What is the difference between struct and class?

Answer:

    -struct: members are public by default.

    -class: members are private by default.
*/

#include <iostream>
using namespace std;

struct S {
    int x; // public by default
};

class C {
    int y; // private by default
public:
    void setY(int val) { y = val; }
    int getY() { return y; }
};

int main() {
    S s;
    s.x = 10;  // accessible
    C c;
    c.setY(20);
    cout << s.x << " " << c.getY();
}
