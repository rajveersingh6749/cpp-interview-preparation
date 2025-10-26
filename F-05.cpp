/*

5. What are inline functions?

Answer:
An inline function suggests the compiler to replace the function call with the function code — helps reduce function call overhead (used for short functions).

*/

#include <iostream>
using namespace std;

inline int square(int x) { return x * x; }

int main() {
    cout << square(5);
}
