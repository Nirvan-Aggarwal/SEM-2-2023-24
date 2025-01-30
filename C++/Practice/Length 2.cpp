#include<iostream>
using namespace std;

class Box {
private:
    int length; // Private member variable to store length

public:
    // Constructor to initialize length
    Box() {
        length = 
		10;
    }

    // Declaration of the friend function to print length
    friend int printlen(Box b);
};

// Definition of the friend function to print length using scope resolution operator
int printlen(Box b) {
    // Accessing private member 'length' of Box class using scope resolution
    // Adding 20 to the length
    b.Box::length = b.Box::length + 20;
    return b.Box::length;
}

int main() {
    Box b; // Creating an object of Box class
    cout << "Length is: " << printlen(b) << endl; // Calling the function to print length
    return 0;
}

