/*
💡 C++11/14/17 Concepts (Only if the interviewer goes advanced) 
1. What is a lambda function? 
2. What are move constructors?
3. What are rvalue references?
4. What is auto keyword?
5. What is nullptr? 
*/

/*
🧩 1. Lambda Function

✅ Definition:
A lambda function is an anonymous (unnamed) function that can be defined inside another function.
It can capture variables from its surrounding scope and is often used with STL algorithms like for_each, sort, etc.
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    // Lambda function to print elements
    for_each(nums.begin(), nums.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;

    // Lambda that captures a variable
    int factor = 2;
    for_each(nums.begin(), nums.end(), [factor](int x) {
        cout << x * factor << " ";
    });
}
✅ Output:
1 2 3 4 5
2 4 6 8 10


🧠 Syntax:
[capture_list](parameters) -> return_type {
    // body
};

[ ] — capture list (variables to capture from outer scope)

() — parameters

{} — function body


Common use case: inline sorting, filtering, or callbacks.
sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; });

*/

/*
⚙️ 2. Move Constructor

✅ Definition:
A move constructor allows an object to "steal" resources from a temporary (rvalue) object instead of copying them.
It’s part of move semantics, introduced in C++11 to improve performance.


#include <iostream>
#include <utility>
using namespace std;

class MyClass {
    int* data;
public:
    MyClass(int value) {
        data = new int(value);
        cout << "Constructor called\n";
    }

    // Move Constructor
    MyClass(MyClass&& other) noexcept {
        cout << "Move Constructor called\n";
        data = other.data;
        other.data = nullptr; // release ownership
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1); // invokes move constructor
}
✅ Output:
Constructor called
Move Constructor called
💡 Purpose: Avoids deep copying, increases efficiency, especially in STL containers like vector
*/

/*
🔄 3. Rvalue References

✅ Definition:
An rvalue reference (T&&) is a reference that can bind to a temporary object (rvalue).

It allows moving resources from temporary objects (used by move constructors and move assignment).

#include <iostream>
using namespace std;

void printRef(const int& x) { cout << "Lvalue reference\n"; }
void printRef(int&& x) { cout << "Rvalue reference\n"; }

int main() {
    int a = 5;
    printRef(a);     // Lvalue reference
    printRef(10);    // Rvalue reference
}
✅ Output:
Lvalue reference
Rvalue reference

💡 Lvalue → has a memory location (like variable a)
💡 Rvalue → temporary value (like literal 10)
*/


/*
⚡ 4. auto Keyword

✅ Definition:
Introduced in C++11, auto lets the compiler automatically deduce the type of a variable at compile time.

This makes code cleaner and easier to maintain.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    auto x = 10;             // int
    auto y = 3.14;           // double
    auto str = "Hello";      // const char*
    vector<int> nums = {1, 2, 3};

    for (auto num : nums) {  // range-based for with auto
        cout << num << " ";
    }
}
✅ Output:
1 2 3


🧠 Interview Tip:
Use auto when:

Type is long/complex (map<int, vector<int>>::iterator)

You want compiler to infer type correctly
But avoid using it everywhere — sometimes explicit types improve readability.
*/


/*
⚙️ 5. nullptr

✅ Definition:
nullptr is a keyword introduced in C++11 that represents a null pointer constant, replacing NULL or 0.

It provides type safety — unlike NULL, which is just 0 and can cause ambiguity in function overloading.

#include <iostream>
using namespace std;

void print(int x) { cout << "Integer version\n"; }
void print(int* p) { cout << "Pointer version\n"; }

int main() {
    print(0);        // calls int version (ambiguous with NULL)
    print(nullptr);  // calls pointer version (clear)
}
✅ Output:
Integer version
Pointer version

💡 Tip: Always prefer nullptr in modern C++ for clarity and safety.
*/