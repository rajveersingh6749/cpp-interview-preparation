/*
6. What is the difference between stack and heap memory?

✅ Explanation:

| Feature    | Stack                 | Heap                       |
| ---------- | --------------------- | -------------------------- |
| Managed By | Compiler              | Programmer                 |
| Lifetime   | Auto (function scope) | Manual (`new` / `delete`)  |
| Speed      | Fast                  | Slower                     |
| Storage    | Local variables       | Dynamically allocated data |

*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;             // stack
    int* b = new int(20);   // heap
    cout << "Stack: " << a << ", Heap: " << *b;
    delete b;
}

/*
Interview Recap:

💡 Common follow-up questions:

    -What happens if you call delete twice? (→ undefined behavior)

    -What if you forget to delete a pointer? (→ memory leak)

    -Can smart pointers cause circular references? (→ yes, with shared_ptr, solved using weak_ptr)
*/