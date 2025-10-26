/*
7. What is this pointer?

✅ Explanation:
this is a special pointer available inside non-static member functions of a class.
It points to the current object that invoked the function.
*/

#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) { this->length = l; }
    void show() {
        cout << "Length: " << this->length << endl;
    }
};

int main() {
    Box b(10);
    b.show();
}


/*
🧩 Tip:
Used when:

    -Local variable names shadow member variables.

    -Returning current object (for method chaining).
*/

/*
Interview Recap:

💡 Common follow-ups:

    -What happens if you dereference a null pointer? → Undefined behavior / crash.

    -Can this be used in static functions? → ❌ No.

    -Can a reference be null? → ❌ No, must always refer to valid data.
*/