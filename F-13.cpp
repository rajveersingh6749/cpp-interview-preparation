/*
3. What is a memory leak? How do you prevent it?

✅ Explanation:
A memory leak occurs when allocated memory is not freed, causing wasted RAM.
*/

#include <iostream>
using namespace std;

void leak() {
    int* p = new int(10);
    // Forgot to delete p → memory leak
}

int main() {
    leak();
    cout << "Program ended";
}

/*
🧩 Prevention Tips:

    -Always pair new with delete.

    -Use smart pointers (e.g., unique_ptr, shared_ptr).

    -Use tools like Valgrind to detect leaks
*/