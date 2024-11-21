/*
#include <cstring>
#include <iostream>
using namespace std;

class String {
private:
    char* s;    // Pointer to the dynamic character array
    int size;   // Size of the string

public:
    String(const char* str = NULL); // Constructor
    ~String() { delete[] s; }       // Destructor
    String(const String&);          // Copy constructor
    void print() { cout << s << endl; } // Print the string
    void change(const char*);       // Modify the string
};

// Constructor: Creates a string
String::String(const char* str) {
    if (str) {
        size = strlen(str);
        s = new char[size + 1];     // Allocate memory
        strncpy_s(s, size + 1, str, size); // Safely copy the string
    } else {
        size = 0;
        s = new char[1];
        s[0] = '\0';               // Initialize as an empty string
    }
}

// Modify the string
void String::change(const char* str) {
    delete[] s;                    // Free existing memory
    size = strlen(str);
    s = new char[size + 1];        // Allocate new memory
    strncpy_s(s, size + 1, str, size); // Safely copy the string
}

// Copy constructor
String::String(const String& old_str) {
    size = old_str.size;
    s = new char[size + 1];        // Allocate memory
    strncpy_s(s, size + 1, old_str.s, size); // Safely copy the string
}

int main() {
    String str1("PUCIT");
    String str2 = str1;            // Use the copy constructor

    str1.print(); // Prints: PUCIT
    str2.print(); // Prints: PUCIT

    str2.change("FCIT");

    str1.print(); // Prints: PUCIT (unchanged due to deep copy)
    str2.print(); // Prints: FCIT (modified string)

    return 0;
}
*/
