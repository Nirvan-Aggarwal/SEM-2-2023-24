#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double calculateAverage(const vector<int>& marks, int numSubjects) {
    if (numSubjects <= 0) {
        throw std::invalid_argument("Number of subjects must be greater than 0.");
    }

    double sum = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        if (marks[i] < 0 || marks[i] > 100) {
            throw std::out_of_range("Invalid marks detected. Marks must be between 0 and 100.");
        }
        sum += marks[i];
    }
    return sum / numSubjects;
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: " << endl;
    cin >> numSubjects;

    vector<int> marks(numSubjects);
    cout << "Enter the marks for each subject: " << endl;
    for (int i = 0; i < numSubjects; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    try {
        double average = calculateAverage(marks, numSubjects);
        cout << "Average marks: " << average << endl;
    }
    catch (const std::invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    catch (const std::out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }
    catch (const std::runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unknown error has been detected." << endl;
    }

    return 0;
}
  
