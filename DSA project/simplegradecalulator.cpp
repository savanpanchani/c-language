#include<iostream>
using namespace std;


int main()
{
    int score;
    char grade;

    cout << "Enter Your Score (out of 100):"<< endl;
    cin >> score;


    
    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B' : 
            (score >= 70) ? 'C' : 
            (score >= 60) ? 'D' : 
            (score >= 50) ? 'F' : 'F';
    
     cout << "YOUR GRADE IS " << grade << "." << endl;

     
    switch(grade)
    {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well Done!" << endl;
            break;
        case 'C':
            cout << "Good Job!" << endl;
            break;
        case 'D':
            cout << "Perfect Work!" << endl;
            break;
        case 'F':
            cout << "Sorry, You Failed!" << endl;
            break;
        default:
            cout << "Invalid Grade." << endl;
    }

        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E')
        
        
    {
        cout << "Congratulations! You Are Eligible For The Next Level." << endl;
        
    }
    else
    {
    	
        cout << "Please Try Again Next Time." << endl;
        
    }

    return 0;

}