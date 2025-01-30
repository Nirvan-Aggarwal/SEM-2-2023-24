#include <iostream>
#include <vector>
#include <sstream> // Include <sstream> for stringstream
using namespace std;

// Iterative Linear Search
int ILS(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // If target is not found, return -1
}

// Recursive Linear Search
int RLS(vector<int>& arr, int target, int index) {
    if (index >= arr.size()) {
        return -1; // Element not found
    }
    if (arr[index] == target) {
        return index; // Return the index of the target element
    }
    return RLS(arr, target, index + 1); // Recursive call with next index
}

// Iterative Binary Search
int IBS(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

// Recursive Binary Search
int RBS(vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1; // Element not found
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid; // Element found
    } else if (arr[mid] < target) {
        return RBS(arr, target, mid + 1, right); // Search in the right half
    } else {
        return RBS(arr, target, left, mid - 1); // Search in the left half
    }
}

// Convert int to string using stringstream
string intToString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    int target = 40;

    // Linear Search
    int ILSResult = ILS(arr, target);
    int RLSResult = RLS(arr, target, 0);

    // Binary Search
    int IBSResult = IBS(arr, target);
    int RBSResult = RBS(arr, target, 0, arr.size() - 1);

    // Output results
    cout << "Iterative Linear Search: " << (ILSResult != -1 ? "Element found at index " + intToString(ILSResult) : "Element not found") << endl;
    cout << "Recursive Linear Search: " << (RLSResult != -1 ? "Element found at index " + intToString(RLSResult) : "Element not found") << endl;
    cout << "Iterative Binary Search: " << (IBSResult != -1 ? "Element found at index " + intToString(IBSResult) : "Element not found") << endl;
    cout << "Recursive Binary Search: " << (RBSResult != -1 ? "Element found at index " + intToString(RBSResult) : "Element not found") << endl;

    return 0;
}



