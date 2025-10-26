/*
2. What is the difference between pointer and reference?

✅ Explanation:

| Feature              | Pointer  | Reference |
| -------------------- | -------- | --------- |
| Declaration          | `int* p` | `int& r`  |
| Can be reassigned?   | ✅ Yes   | ❌ No    |
| Can be null?         | ✅ Yes   | ❌ No    |
| Must be initialized? | ❌ No    | ✅ Yes   |
| Syntax for access    | `*p`     | `r`       |

*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;   // pointer
    int& r = x;    // reference

    *p = 20;
    cout << "x via pointer: " << x << endl;
    r = 30;
    cout << "x via reference: " << x << endl;
}

/*
🧩 Tip:
References are aliases, not variables. Once bound, they cannot be changed.
*/