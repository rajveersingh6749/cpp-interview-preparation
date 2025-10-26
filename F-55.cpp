/*
// 🧩 9. File Handling in C++


1. What is file handling?

✅ Definition:
File handling in C++ allows a program to read from and write to files on disk.
C++ provides file stream classes in <fstream>:

ifstream → input file stream (read)

ofstream → output file stream (write)

fstream → read and write


2. Writing to a file using ofstream
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");  // create/open file

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    outFile << "Hello, world!\n";
    outFile << "C++ File Handling Example.\n";

    outFile.close();  // close the file
    cout << "Data written successfully." << endl;
}

✅ Explanation:

ofstream opens the file in write mode by default.

If file doesn’t exist → it is created.

close() releases the resource.


3. Reading from a file using ifstream

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt");  // open file for reading

    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

✅ Explanation:

getline() reads line by line.

Always check if the file opened successfully.


4. Using fstream for read & write

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::out | ios::in | ios::trunc);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "Line 1\nLine 2\n";  // write to file

    file.seekg(0);  // move get pointer to beginning

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}
✅ Explanation:

fstream can do both reading and writing.

ios::out, ios::in → write and read mode.

seekg() moves the read pointer.


5. Checking file state
Common methods:

is_open() → check if file is open

eof() → check if end-of-file reached

fail() → check if read/write failed

ifstream file("data.txt");

if (!file.is_open()) {
    cout << "Cannot open file!" << endl;
}

while (!file.eof()) {
    string line;
    getline(file, line);
    cout << line << endl;
}


6. Reading and writing numbers
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("numbers.txt");
    out << 10 << " " << 20 << " " << 30;
    out.close();

    ifstream in("numbers.txt");
    int a, b, c;
    in >> a >> b >> c;
    cout << a << ", " << b << ", " << c << endl;
}
✅ Output:
10, 20, 30

7. Tips & Best Practices

✅ Always close files after reading/writing.
✅ Use ifstream for reading, ofstream for writing.
✅ Use fstream for read & write.
✅ Prefer exception handling when working with files to catch errors.
✅ Avoid reading past EOF — use getline() or eof() properl


Common Interview Follow-ups

💬 Q: What is the difference between ofstream, ifstream, and fstream?
A:
| Stream   | Mode       | Purpose    |
| -------- | ---------- | ---------- |
| ofstream | Write      | Write-only |
| ifstream | Read       | Read-only  |
| fstream  | Read/Write | Both       |

💬 Q: How do you append to a file instead of overwriting?
A: Open file in ios::app mode:
ofstream out("file.txt", ios::app);

💬 Q: What happens if the file does not exist?
A:

ofstream → creates new file

ifstream → fails to open
*/