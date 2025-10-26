// 6. Example: Overloading prefix and postfix ++

#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v=0) : value(v) {}

    // Prefix ++
    Counter operator ++ () {
        ++value;
        return *this;
    }

    // Postfix ++
    Counter operator ++ (int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void show() const { cout << value << endl; }
};

int main() {
    Counter c(5);
    (++c).show(); // 6
    (c++).show(); // 6 (but internal value now 7)
    c.show();     // 7
}

/*
🧩 Tip:
Postfix takes a dummy int parameter to differentiate from prefix.
*/