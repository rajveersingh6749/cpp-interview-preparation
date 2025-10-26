// ⚙️ 4. Constructors, Destructors & Copying

/*
1. What is a constructor?

✅ Explanation:
A constructor is a special function automatically called when an object is created.
It initializes class members.
*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called\n";
    }

    void display() {
        cout << name << " (" << age << ")\n";
    }
};

int main() {
    Person p1("Rajveer", 22);
    p1.display();
}


/*
🧩 Tip:

    -Constructors have the same name as the class.

    -They don’t have a return type (not even void).
*/