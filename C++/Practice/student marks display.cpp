#include <iostream>
using namespace std;
class Student
{
private:
int mathScore;

int physicsScore;

int calculateTotalMarks()

{

return (mathScore + physicsScore);
}
public:

void setScores(int math, int physics)

{

mathScore=math; 
physicsScore = physics;

}

void displayReport()

{

int total = calculateTotalMarks();

cout << "Math Score: " << mathScore <<endl;

cout << "Physics Score: "<< physicsScore <<endl;

cout << "Total Marks: " << total<<endl;

}

};

int main()

{

Student student1; 
student1.setScores(90, 85);
 student1.displayReport();

return 0;

}


