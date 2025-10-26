/*
6. Can we have an array of pointers?

✅ Explanation:
Yes. Each element of the array can store an address.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    int* arr[3] = { &a, &b, &c };

    for (int i = 0; i < 3; i++) {
        cout << *arr[i] << " ";  // prints 1 2 3
    }
}


/*
🧩 Tip:
You can also have arrays of function pointers — often used in menus or command handlers.
*/