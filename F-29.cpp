/*
5. What is constructor overloading?

✅ Explanation:
Having multiple constructors with different parameter lists.
*/

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() {
        length = breadth = 0; 
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b; 
    }
    void area() { 
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;       // calls default constructor
    Rectangle r2(4, 5); // calls parameterized constructor
    r1.area();
    r2.area();
}

/*
🧩 Tip:
Constructor overloading helps create objects in different initialization states.
*/