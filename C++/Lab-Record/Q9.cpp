 #include<iostream>
#include<string.h>
using namespace std;

class person {
protected:
    char name[20];
public:
    void setPerson(char n[20]) {
        strcpy(name, n);
    }
};

class employee : public person {
protected:
    double salary;
public:
    void getemployee(double s) {
        salary = s;
    }
};

class student : public person {
protected:
    int studentid;
public:
    void getstudent(int id) {
        studentid = id;
    }
};

class Info : public employee, public student {
public:
    void displayInfo() {
        cout << "Name: " << employee::name << endl;
        cout << "Salary: " << employee::salary << endl;
        cout << "Student ID: " << student::studentid << endl;
    }
};

int main() {
    Info i1;
    i1.employee::setPerson("John Doe");
    i1.getemployee(50000);
    i1.getstudent(12345);
    i1.displayInfo();
    return 0;
}


