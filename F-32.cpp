/*
8. Can we have both constructor and destructor in the same class?

✅ Yes, and this is common in C++.

    -Constructor → allocates/initializes resources.

    -Destructor → deallocates/frees resources.
*/

#include <iostream>
using namespace std;

class FileHandler {
public:
    FileHandler() { cout << "Opening file...\n"; }
    ~FileHandler() { cout << "Closing file...\n"; }
};

int main() {
    FileHandler f; // both get called automatically
}

/*
Interview Recap:

💡 Common follow-up questions:

What happens if you don’t define a destructor?
→ Compiler provides a default one.

What is the order of constructor/destructor calls in inheritance?
→ Base constructor → Derived constructor → Derived destructor → Base destructor.

What’s the “Rule of 3” / “Rule of 5”?
→ If you define any of (destructor, copy constructor, copy assignment), you should define all 3 (and in modern C++, move versions too).
*/