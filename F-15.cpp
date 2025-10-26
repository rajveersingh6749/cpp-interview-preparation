/*
5. What is a dangling pointer?

✅ Explanation:
A dangling pointer points to a memory location that has been freed or deleted.
*/

#include <iostream>
using namespace std;

int main() {
    int* p = new int(10);
    delete p;  // memory freed
    // p still points to that address → dangling
    p = nullptr;  // ✅ Good practice
}

/*
🧩 Tip:
Always set pointers to nullptr after deleting them.
*/