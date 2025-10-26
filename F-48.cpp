// 2. Function Template

#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 4) << endl;       // 7
    cout << add<double>(2.5, 3.1) << endl; // 5.6
    cout << add<string>("Hello, ", "World!") << endl;
}

/*
✅ Explanation:

    -template <typename T> → introduces a generic type T.

    -The same function add() works for multiple data types.

    -C++ automatically deduces T from arguments.
*/