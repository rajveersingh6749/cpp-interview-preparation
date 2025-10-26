/*
4. What are smart pointers? (like unique_ptr, shared_ptr)

✅ Explanation:
Smart pointers are classes in STL that automatically manage memory — they delete the object when it’s no longer needed.

| Type         | Ownership       | Key Feature                         |
| ------------ | --------------- | ----------------------------------- |
| `unique_ptr` | Single owner    | Auto-deletes when goes out of scope |
| `shared_ptr` | Multiple owners | Uses reference counting             |
| `weak_ptr`   | Non-owning      | Prevents circular references        |

*/

#include <iostream>
#include <memory>  // for smart pointers
using namespace std;

class Demo {
public:
    Demo() { cout << "Created\n"; }
    ~Demo() { cout << "Destroyed\n"; }
};

int main() {
    {
        unique_ptr<Demo> p1 = make_unique<Demo>(); // auto destroyed
    }

    shared_ptr<Demo> p2 = make_shared<Demo>();
    shared_ptr<Demo> p3 = p2; // both share ownership
    cout << "Use count: " << p2.use_count() << endl;
}
