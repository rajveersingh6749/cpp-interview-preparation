// 🧠 2. Memory Management in C++

/*
1. What is the difference between malloc() and new?

✅ Explanation:

| Feature           | `malloc()`                            | `new`                             |
| ----------------- | ------------------------------------- | --------------------------------- |
| Language          | C function                            | C++ operator                      |
| Returns           | `void*` (needs casting)               | Type-safe pointer                 |
| Calls Constructor | ❌ No                                  | ✅ Yes                             |
| Syntax            | `int* p = (int*)malloc(sizeof(int));` | `int* p = new int;`               |
| Failure           | Returns `NULL`                        | Throws `std::bad_alloc` exception |
| Free memory       | `free()`                              | `delete`                          |

*/

#include <iostream>
#include <cstdlib>  // for malloc/free
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {
    Demo* d1 = (Demo*)malloc(sizeof(Demo)); // No constructor call
    free(d1);                               // No destructor call

    Demo* d2 = new Demo(); // Constructor called
    delete d2;             // Destructor called
}

/*
🧩 Tip:
Always prefer new and delete in C++ — they are type-safe and constructor-aware.
*/