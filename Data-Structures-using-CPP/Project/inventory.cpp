#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to represent an item in the inventory
struct InventoryItem {
    string name;
    int quantity;
    float price;
};
// Function to add an item to the inventory
void addItem() {
    ofstream outFile("inventory.txt", ios::app);
    if (!outFile) {
        cerr << "Error: Unable to open file for writing!" << endl;
        return;
    }

    InventoryItem newItem;
    cout << "Enter item name: ";
    cin >> newItem.name;
    cout << "Enter quantity: ";
    cin >> newItem.quantity;
    cout << "Enter price: ";
    cin >> newItem.price;

    outFile << newItem.name << " " << newItem.quantity << " " << newItem.price << endl;

    outFile.close();
}

// Function to display the inventory
void displayInventory() {
    ifstream inFile("inventory.txt");
    if (!inFile) {
        cerr << "Error: Unable to open file for reading!" << endl;
        return;
    }

    InventoryItem item;
    cout << "Inventory:\n";
    while (inFile >> item.name >> item.quantity >> item.price) {
        cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
    }

    inFile.close();
}

// Function to search for an item in the inventory
void searchItem(const string& itemName) {
    ifstream inFile("inventory.txt");
    if (!inFile) {
        cerr << "Error: Unable to open file for reading!" << endl;
        return;
    }

    InventoryItem item;
    bool found = false;
    while (inFile >> item.name >> item.quantity >> item.price) {
        if (item.name == itemName) {
            found = true;
            cout << "Item found in inventory!\n";
            cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
            break;
        }
    }

    if (!found) {
        cout << "Item not found in inventory!" << endl;
    }

    inFile.close();
}

int main() {
    char choice;
    string itemName;

    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                addItem();
                break;
            case '2':
                displayInventory();
                break;
            case '3':
                cout << "Enter item name to search: ";
                cin >> itemName;
                searchItem(itemName);
                break;
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

