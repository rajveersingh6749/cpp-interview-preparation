/*
4. Example: Overloading == operator
*/

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    bool operator == (const Point& p) const {
        return (x == p.x && y == p.y);
    }
};

int main() {
    Point p1(2, 3), p2(2, 3), p3(1, 5);
    cout << (p1 == p2) << endl; // 1 (true)
    cout << (p1 == p3) << endl; // 0 (false)
}

/*
🧩 Tip:
Always pass the argument by reference (const &) to avoid unnecessary copies.
*/