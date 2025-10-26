/*
8. What are friend functions?

Answer:
A friend function can access private and protected members of a class.
*/

#include <iostream>
using namespace std;

class Box {
    int width;
public:
    Box(int w) : width(w) {}
    friend void showWidth(Box b);
};

void showWidth(Box b) {
    cout << "Width: " << b.width; // can access private member
}

int main() {
    Box b(10);
    showWidth(b);
}
