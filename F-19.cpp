/*
3. What is a null pointer?

✅ Explanation:
A pointer that doesn’t point to any valid memory location. Used for safety and initialization.
*/

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // null pointer
    if (ptr == nullptr)
        cout << "Pointer is null";
}

/*
🧩 Tip:
Use nullptr (C++11) instead of NULL or 0 — it’s type-safe.
*/