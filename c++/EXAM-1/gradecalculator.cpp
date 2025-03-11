#include <iostream>
using namespace std;

int main() {
    int marks; 
    

    cout << "Enter the number of marks: ";
    cin >> marks;


    //step 1:
    string grade = (marks > 100) ? "n" :
            (marks >= 95) ? "A+":
            (marks >= 90) ? "A-" :
            (marks >= 80) ? "B":
            (marks >= 70) ? "C" :
            (marks >= 60) ? "D" :
            (marks >= 50) ? "E" : "F";

    cout << "Grade: " << grade << endl;


     //step 2:

     char gradeofstudent;
     

    gradeofstudent = (marks > 100) ? 'n' :
    (marks >= 90) ? 'A' :
    (marks >= 80) ? 'B' :
    (marks >= 70) ? 'C' :
    (marks >= 60) ? 'D' :
    (marks >= 50) ? 'E' : 'F';


    switch (gradeofstudent)
    {
    case 'A':
        cout << "Excellent Work" << endl;
        break;
        
    case 'B':
        cout << "Well Done" << endl;
        break;
      
    case 'C':
        cout << "Good Job" << endl;
        break;
        
    case 'D':
        cout << "You Passed, but you could do better" << endl;
        break;
      
    case 'E':
        cout << "You need to work harder" << endl;
        break;
        
    case 'n':
    cout << "Invalid input. Please enter a number between 0 and 100." << endl;
        break;
      
    default:
        cout << "Sorry, you failed" << endl;  
        break;
    }

//step 3


    if (marks>=50)
{
 cout<<"Congratulations! You are elegible for next level"<<endl;
}
else{
    cout<<"Please try again next time"<<endl;
}
    return 0;
}
