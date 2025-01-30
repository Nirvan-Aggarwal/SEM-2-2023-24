#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    string genre;
    bool available;
};

void addBook() {
    ofstream outfile("library.txt", ios::app);
    Book newBook;
    cout << "Enter book title: ";
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter genre: ";
    getline(cin, newBook.genre);
    newBook.available = true;
    outfile << newBook.title << "," << newBook.author << "," << newBook.genre << "," << newBook.available << endl;
    outfile.close();
    cout << "Book added successfully!" << endl;
}

void displayBooks() {
    ifstream infile("library.txt");
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
}

int main() {
    int choice;
    do {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                cout << "Exiting program. Thank you!" << endl;
                return 0;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while(choice != 3);
}
