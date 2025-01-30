#include<iostream>
using namespace std;

class Box {
private:
    int length; // Private member variable to store length

public:
    // Constructor to initialize length
    Box() {
        length = 10;
    }

    friend int printlen(Box b);
};
int printlen(Box b) {
   
    b.length = b.length + 20;
    return b.length;
}

int main() {
    Box b;
    cout << "Length is: " << printlen(b) << endl; 
    return 0;
}

