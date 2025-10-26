/*
4. What is the difference between deep copy and shallow copy?

| Type             | Description                                        |
| ---------------- | -------------------------------------------------- |
| **Shallow Copy** | Copies only member values (addresses for pointers) |
| **Deep Copy**    | Creates new copies of dynamically allocated memory |

*/

#include <iostream>
#include <cstring>
using namespace std;

class Sample {
    char* name;
public:
    Sample(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Deep Copy Constructor
    Sample(const Sample& s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        cout << "Deep Copy Constructor called\n";
    }

    void show() { cout << name << endl; }
    ~Sample() { delete[] name; }
};

int main() {
    Sample s1("Rajveer");
    Sample s2 = s1; // Deep copy
    s2.show();
}

/*
🧩 Tip:
Without a deep copy, both objects may point to the same memory, causing double deletion errors.
*/