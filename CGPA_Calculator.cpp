// CGPA Calculator: This project includes a CGPA calculator feature.
// Project 1: CGPA Calculator
// The users input their grades and credits for each course, and the program calculates the CGPA based on the provided data.
// The program should be able to handle multiple courses and compute the CGPA accordingly.
// The program should also validate the input to ensure that grades and credits are within acceptable ranges.
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    cout << "Welcome to the CGPA Calculator!" << endl;
    cout << "Please enter the number of courses: ";
    int numCourses;
    cin >> numCourses;
    if (numCourses <= 0) {
        cout << "Invalid number of courses. Exiting program." << endl;
        return 1;
    }

    string letterGrade[numCourses];
    double credits[numCourses];
    double gradePoints[numCourses];
    double totalGradePoints = 0.0;
    double totalCredits = 0.0;
    double cumulative_GPA = 0.0;

    cout << "Please enter the grades and credits for each course." << endl;
    cout << "Format: Grade Credit (e.g. B+ 4.0)" << endl;

    
    for(int i = 0; i < numCourses; i++)
    {  
        cin >> letterGrade[i];
        cin >> credits[i];

        if(letterGrade[i] == "A+")
        {
            gradePoints[i] = 4.0 * credits[i];
        }
        else if(letterGrade[i] == "A")
        {
            gradePoints[i] = 4.0 * credits[i];
        }
        else if(letterGrade[i] == "A-")
        {
            gradePoints[i] = 3.7 * credits[i];
        }
        else if(letterGrade[i] == "B+")
        {
            gradePoints[i] = 3.3 * credits[i];
        }
        else if(letterGrade[i] == "B")
        {
            gradePoints[i] = 3.0 * credits[i];
        }
        else if(letterGrade[i] == "B-")
        {
            gradePoints[i] = 2.7 * credits[i];
        }
        else if(letterGrade[i] == "C+")
        {
            gradePoints[i]= 2.3 * credits[i];
        }
        else if(letterGrade[i] == "C")
        {
            gradePoints[i] = 2.0 * credits[i];
        }
        else if(letterGrade[i] == "C-")
        {
            gradePoints[i] = 1.7 * credits[i];
        }
        else if(letterGrade[i] == "D+")
        {
            gradePoints[i] = 1.3 * credits[i];
        }
        else if(letterGrade[i] == "D")
        {
            gradePoints[i] = 1.0 * credits[i];
        }
        else if(letterGrade[i] == "D-")
        {
            gradePoints[i] = 0.7 * credits[i];
        }
        else if(letterGrade[i] == "F")
        {
            gradePoints[i] = 0.0 * credits[i];
        }
        else
        {
            cout << "Letter Grade not applicable. Terminating program" << endl;
            return -1;
        }

        totalGradePoints = totalGradePoints + gradePoints[i];
        totalCredits = totalCredits + credits[i];
    }

        cumulative_GPA = totalGradePoints / totalCredits;

        cout << setprecision(3);

        cout << "Your cumulative GPA is: " << cumulative_GPA << endl;


    return 0;
}