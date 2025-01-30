#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char name[20];
    int scores[5]; // Array to store scores for 5 subjects

public:
    Student() {
       
        cout<<"hi";
        cin>>name;
    }

    // Member function to set the scores for each subject 
    void setScores(int math, int physics, int chemistry, int biology, int history) {
        scores[0] = math;
        scores[1] = physics;
        scores[2] = chemistry;
        scores[3] = biology;
        scores[4] = history;
    }

    // Member function to display the student's details and scores 
    void displayReport() {
        cout << "Student Name: " << name << endl;
        cout << "Scores for 5 Subjects: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": " << scores[i] << endl;
        }
    }
};

int main() {
    Student s1;
    s1.setScores(90, 85, 78, 92, 88);
    s1.displayReport();
    return 0;
}

