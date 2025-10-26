/*
// 7. Example: Using vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);
    v.push_back(5);

    for(int i : v)
        cout << i << " ";

    cout << "\nSize: " << v.size() << endl;
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;
}

✅ Explanation:
Vectors are dynamic arrays that can grow or shrink automatically.


// 8. Example: Using map
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;
    marks["Raj"] = 90;
    marks["Simran"] = 95;
    marks["Aman"] = 85;

    for(auto &p : marks)
        cout << p.first << " -> " << p.second << endl;
}
✅ Explanation:

Stores key-value pairs in sorted order of keys.

Internally uses a balanced binary search tree (like Red-Black Tree).

// 9. Example: Using unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;
    marks["Raj"] = 90;
    marks["Simran"] = 95;
    marks["Aman"] = 85;

    for(auto &p : marks)
        cout << p.first << " -> " << p.second << endl;
}
✅ Explanation:

Doesn’t maintain order.

Internally uses a hash table.

Faster lookups (average O(1)).

// 10. Example: Using Iterators
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}
✅ Explanation:
Iterators behave like pointers to access elements of containers.

// 11. Example: STL Algorithms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 8, 1, 5};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i : v)
        cout << i << " ";
}
✅ Explanation:
STL provides built-in algorithms for sorting, searching, reversing, etc.


12. STL Best Practices

✅ Prefer STL containers over manually implementing linked lists, stacks, etc.
✅ Use auto with iterators for cleaner code.
✅ Always check complexity — e.g., vector random access = O(1), map insert = O(log n).
✅ unordered_map is fast but not ordered, map is ordered but slower.


Common Interview Follow-ups

💬 Q: How does a vector differ from an array?
A:
| Feature  | Array                 | Vector                                     |
| -------- | --------------------- | ------------------------------------------ |
| Size     | Fixed                 | Dynamic                                    |
| Memory   | Stack                 | Heap                                       |
| Features | No built-in functions | Rich functions (`push_back`, `size`, etc.) |


💬 Q: What is an iterator?
A:
An iterator is an object that acts like a pointer to access elements of STL containers sequentially.

💬 Q: Why prefer unordered_map over map?
A:
Because unordered_map uses hashing → faster average O(1) lookups (though unordered).
*/