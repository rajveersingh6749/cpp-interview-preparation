/*
10. What is the scope resolution operator (::)?

Answer:
Used to access:

    -Global variables when local variables hide them.

    -Class functions defined outside the class.

Static members.
*/

#include <iostream>
using namespace std;

int value = 50;

class Demo {
public:
    static int num;
    void show();
};

int Demo::num = 10;

void Demo::show() {
    cout << "Static num: " << num << endl;
    cout << "Global value: " << ::value << endl;
}

int main() {
    Demo d;
    d.show();
}
