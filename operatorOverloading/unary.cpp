#include <iostream>
using namespace std;

class complex {
private:
    int real;
    int img;

public:
    // Constructor
    complex(int r, int i) {
        real = r;
        img = i;
    }

    void display();

    // Overloading '++' (prefix increment)
    complex operator++();

    // Overloading '--' (prefix decrement)
    complex operator--();

    // Overloading unary '-' operator
    complex operator-();
};

// Function to display the complex number
void complex::display() {
    cout << real << " + " << img << "i" << endl;
}

// Overloading '++' operator (prefix)
// Similar to the following commented code for incrementing:
// complex complex::increment() {
//     real += 1;
//     img += 1;
//     return *this;
// }
complex complex::operator++() {
    ++real;
    ++img;
    return *this;
}

// Overloading '--' operator (prefix)
// Similar to the following commented code for decrementing:
// complex complex::decrement() {
//     real -= 1;
//     img -= 1;
//     return *this;
// }
complex complex::operator--() {
    --real;
    --img;
    return *this;
}

// Overloading unary '-' operator
// Similar to the following commented code for negating:
// complex complex::negate() {
//     real = -real;
//     img = -img;
//     return *this;
// }
complex complex::operator-() {
    return complex(-real, -img);
}

int main() {
    complex c1(5, 7);
    complex c2(0, 0);

    // Display original c1
    cout << "Original c1: ";
    c1.display();

    // Testing '++' operator (prefix increment)
    cout << "After ++c1: ";
    ++c1;
    c1.display();

    // Testing '--' operator (prefix decrement)
    cout << "After --c1: ";
    --c1;
    c1.display();

    // Testing unary '-' operator
    cout << "After -c1: ";
    c2 = -c1;
    c2.display();

    return 0;
}
