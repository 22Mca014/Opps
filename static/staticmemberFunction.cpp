#include <iostream>
using namespace std;

class test {
    int code; // Non-static member variable
    static int count; // Static member variable

public:
    // Function to set code
    void setcode() {
        code = ++count; // Increment count and assign it to code
    }

    // Function to display code
    void showcode() {
        cout << "Object number: " << code << endl;
    }

    // Static function to display count
    static void showcount() {
        cout << "Count: " << count << endl;
    }
};

// Initialize static member variable
int test::count = 0;

int main() {
    test t1, t2, t3;

    // Set codes for objects
    t1.setcode();
    t2.setcode();

    // Show count after two objects
    test::showcount();

    t3.setcode();

    // Show count after third object
    test::showcount();

    // Display codes of individual objects
    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}
//Note:
//1.we can't define static member function outside the class definition.
//2.we can call static member function without creating an object of the class.
