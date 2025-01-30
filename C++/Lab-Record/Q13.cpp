#include <iostream>
using namespace std;

// Template function declaration
template<class U>
void Bubsort(U data[], int size);

// Template function definition
template<class U>
void Bubsort(U data[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(data[j] > data[j + 1]) {
                U t = data[j];
                data[j] = data[j + 1];
                data[j + 1] = t;
            }
        }
    }
}

int main() {
    int num[25];
    float fnum[25];
    int size;

    cout << "\nProgram to sort the elements...." << endl;

    cout << "\nEnter the size of the integer vector (max is 25): ";
    cin >> size;
    cout << "Enter the elements of the integer vector: ";
    for(int i = 0; i < size; i++)
        cin >> num[i];
    Bubsort(num, size);
    cout << "\nSorted Vector elements are:" << endl;
    for(int i = 0; i < size; i++)
        cout << num[i] << " ";
    
    cout << "\n\nEnter the size of the float vector (max is 25): ";
    cin >> size;
    cout << "Enter the elements of the float vector: ";
    for(int i = 0; i < size; i++)
        cin >> fnum[i];
    Bubsort(fnum, size);
    cout << "\nSorted Vector elements are:" << endl;
    for(int i = 0; i < size; i++)
        cout << fnum[i] << " ";
        
    return 0;
}

