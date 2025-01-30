#include<iostream>
#include<cstring>
using namespace std;

class pal {
private:
    char name[20];
    int check(); //private member function
public:
    void display(); //public member function
};

int pal::check() {
    cout << "Enter any string: ";
    cin >> name
    int l = strlen(name);
    int c = 1; // Initialize c to 1, assuming it's a palindrome
    for(int i = 0, j = l - 1; i < j; i++, j--) {
        if(name[i] != name[j]) {
            c = 0;
            break; // If characters don't match, it's not a palindrome, exit loop
        }
    }
    return c;
}

void pal::display() {
    int ch = check();
    if(ch)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";
}

int main() {
    pal p;
    p.display();
    return 0;
}

