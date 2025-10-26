// 🧠 8. Exception Handling in C++

/*
1. What is Exception Handling?

✅ Definition:
Exception handling in C++ is a mechanism to handle runtime errors gracefully — without abruptly terminating the program.

It uses three main keywords:

try → block of code to test for errors

throw → keyword used to raise (throw) an exception

catch → block to handle the thrown exception
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Division by zero error!";  // throwing a string
        cout << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues normally..." << endl;
}

/*
✅ Output:
Exception caught: Division by zero error!
Program continues normally...

✅ Explanation:

Code inside try is monitored for exceptions.

If error occurs, throw passes control to the matching catch block.

Program execution does not stop; it resumes after the catch.
*/


// 3. Multiple Catch Blocks
/*
#include <iostream>
using namespace std;

int main() {
    try {
        int x = -5;

        if (x == 0)
            throw 0;          // int type exception
        else if (x < 0)
            throw "Negative number not allowed";  // string type exception
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (const char* msg) {
        cout << "Caught string exception: " << msg << endl;
    }

    return 0;
}

✅ Output:
Caught string exception: Negative number not allowed

✅ Explanation:
You can have multiple catch blocks, and C++ matches the type of thrown exception.
*/

// 4. Catch-All Handler (catch(...))
/*
#include <iostream>
using namespace std;

int main() {
    try {
        throw 3.14;
    }
    catch (int) {
        cout << "Integer exception caught!" << endl;
    }
    catch (...) {
        cout << "Unknown exception caught!" << endl;
    }
}

✅ Output:
Unknown exception caught!

✅ Explanation:
The catch(...) block handles any type of exception that doesn’t match earlier ones.


*/

// 5. Exception Handling with Functions
/*
#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0)
        throw runtime_error("Division by zero!");
    cout << "Result: " << a / b << endl;
}

int main() {
    try {
        divide(10, 0);
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
✅ Output:
Error: Division by zero!

✅ Explanation:
You can throw exceptions from a function, and handle them in the caller.
*/

/*
// 6. Using Standard Exceptions (from <stdexcept>)
C++ provides predefined exception classes like:

runtime_error

logic_error

out_of_range

invalid_argument

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw out_of_range("Index out of range!");
    }
    catch (const out_of_range& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
}
✅ Output:
Caught exception: Index out of range!
✅ Explanation:
e.what() returns the error message associated with the exception.
*/


/*
// 7. Custom (User-defined) Exception Class

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception Occurred!";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (const MyException& e) {
        cout << e.what() << endl;
    }
}
✅ Output:
Custom Exception Occurred!
✅ Explanation:
You can define your own exception class by inheriting from std::exception.
*/

/*
// 8. Re-throwing an Exception
#include <iostream>
using namespace std;

void func() {
    try {
        throw "Error inside func()";
    }
    catch (...) {
        cout << "Caught inside func(), rethrowing...\n";
        throw;  // rethrow the same exception
    }
}

int main() {
    try {
        func();
    }
    catch (const char* msg) {
        cout << "Caught in main(): " << msg << endl;
    }
}
✅ Output:
Caught inside func(), rethrowing...
Caught in main(): Error inside func()

✅ Explanation:
You can re-throw an exception to be handled at a higher level.
*/

/*
// 9. Exception Handling — Best Practices

✅ Use specific catch types first, then generic ones (catch(...) last).
✅ Always prefer throwing exceptions, not return codes, for runtime errors.
✅ Don’t use exceptions for normal control flow (e.g., loops).
✅ If using custom classes, inherit from std::exception for consistency.
*/

/*
Common Interview Follow-ups

💬 Q: Can we throw objects instead of primitive types?
A: Yes! You can throw any type — object, int, string, etc.

💬 Q: What happens if no catch block matches the thrown exception?
A: The program calls std::terminate() and ends abnormally.

💬 Q: Can we have multiple try-catch blocks?
A: Yes, and they can even be nested.
*/