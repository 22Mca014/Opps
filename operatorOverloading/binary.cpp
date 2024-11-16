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

    // Overloading '+' operator
    complex operator+(complex);

    // Overloading '-' operator
    complex operator-(complex);

    // Overloading '*' operator
    complex operator*(complex);

    // Overloading '/' operator
    complex operator/(complex);

    // Overloading '==' operator
    bool operator==(complex);

    // Overloading '!=' operator
    bool operator!=(complex);

    // Overloading '<' operator
    bool operator<(complex);

    // Overloading '>' operator
    bool operator>(complex);

    // Overloading '<=' operator
    bool operator<=(complex);

    // Overloading '>=' operator
    bool operator>=(complex);
};

// Function to display the complex number
void complex::display() {
    cout << real << " + " << img << "i" << endl;
}

// Overloading '+' operator
// Similar to the following commented code for addition:
// complex complex::addition(complex c)
// {
//     complex temp(0,0);
//     temp.real = c.real + real;
//     temp.img = c.img + img;
//     return temp;
// }
complex complex::operator+(complex c) {
    complex temp(0, 0);
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

// Overloading '-' operator
// Function subtracts two complex numbers
complex complex::operator-(complex c) {
    complex temp(0, 0);
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

// Overloading '*' operator
// Function multiplies two complex numbers
complex complex::operator*(complex c) {
    complex temp(0, 0);
    temp.real = real * c.real - img * c.img;
    temp.img = real * c.img + img * c.real;
    return temp;
}

// Overloading '/' operator
// Function divides two complex numbers
complex complex::operator/(complex c) {
    complex temp(0, 0);
    int denominator = c.real * c.real + c.img * c.img;
    temp.real = (real * c.real + img * c.img) / denominator;
    temp.img = (img * c.real - real * c.img) / denominator;
    return temp;
}

// Overloading '==' operator
// Checks if two complex numbers are equal
bool complex::operator==(complex c) {
    return real == c.real && img == c.img;
}

// Overloading '!=' operator
// Checks if two complex numbers are not equal
bool complex::operator!=(complex c) {
    return !(*this == c);
}

// Overloading '<' operator
// Compares magnitudes of two complex numbers
bool complex::operator<(complex c) {
    return (real * real + img * img) < (c.real * c.real + c.img * c.img);
}

// Overloading '>' operator
// Compares magnitudes of two complex numbers
bool complex::operator>(complex c) {
    return (real * real + img * img) > (c.real * c.real + c.img * c.img);
}

// Overloading '<=' operator
// Checks if one complex number's magnitude is less than or equal to another's
bool complex::operator<=(complex c) {
    return !(*this > c);
}

// Overloading '>=' operator
// Checks if one complex number's magnitude is greater than or equal to another's
bool complex::operator>=(complex c) {
    return !(*this < c);
}

int main() {
    complex c1(5, 7);
    complex c2(3, 2);
    complex c3(0, 0);

    // Testing '+' operator
    // Adds two complex numbers
    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();

    // Testing '-' operator
    // Subtracts two complex numbers
    c3 = c1 - c2;
    cout << "c1 - c2 = ";
    c3.display();

    // Testing '*' operator
    // Multiplies two complex numbers
    c3 = c1 * c2;
    cout << "c1 * c2 = ";
    c3.display();

    // Testing '/' operator
    // Divides two complex numbers
    c3 = c1 / c2;
    cout << "c1 / c2 = ";
    c3.display();

    // Testing '==' operator
    // Checks equality of two complex numbers
    cout << "c1 == c2: " << (c1 == c2 ? "True" : "False") << endl;

    // Testing '!=' operator
    // Checks inequality of two complex numbers
    cout << "c1 != c2: " << (c1 != c2 ? "True" : "False") << endl;

    // Testing '<' operator
    // Compares magnitudes of two complex numbers
    cout << "c1 < c2: " << (c1 < c2 ? "True" : "False") << endl;

    // Testing '>' operator
    // Compares magnitudes of two complex numbers
    cout << "c1 > c2: " << (c1 > c2 ? "True" : "False") << endl;

    // Testing '<=' operator
    // Checks if c1's magnitude is less than or equal to c2's
    cout << "c1 <= c2: " << (c1 <= c2 ? "True" : "False") << endl;

    // Testing '>=' operator
    // Checks if c1's magnitude is greater than or equal to c2's
    cout << "c1 >= c2: " << (c1 >= c2 ? "True" : "False") << endl;

    return 0;
}
