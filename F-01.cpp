// 1. What are the differences between C and C++?
/*
Answer:

| Feature              | C                              | C++                                      |
| -------------------- | ------------------------------ | ---------------------------------------- |
| Programming Paradigm | Procedural                     | Object-Oriented + Procedural             |
| Data Security        | Less secure (no encapsulation) | More secure (encapsulation, abstraction) |
| Functions            | Standalone                     | Can be inside classes (methods)          |
| Memory Management    | `malloc/free`                  | `new/delete`, constructors/destructors   |
| Function Overloading | Not supported                  | Supported                                |
| I/O                  | `printf/scanf`                 | `cin/cout`                               |
| Namespace            | Not supported                  | Supported                                |

*/

#include <iostream>
using namespace std;

class Hello {
public:
    void greet() {
        cout << "Hello from C++ OOP style!" << endl;
    }
};

int main() {
    Hello obj;
    obj.greet();
    return 0;
}
