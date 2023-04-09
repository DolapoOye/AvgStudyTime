// Program purpose: This program finds the average number of hours per day that a given student
// studies math as well as programming
#include <iostream>
using namespace std;

int main()
{
    
    // Declaring variables
    int numStudents; 
    int numDays;
    
    int mathHrs , programmingHrs;
    double mathaverage , programaverage;

    
    
    cout << "How many students are there? ";
    cin >> numStudents; 

    cout << "Enter the number of days in the long weekend: ";
    cin >> numDays;

    for(int i = 0; i < numStudents; i++)
    {
        double totalprogrammingHrs = 0; // This calculates the total programming hours
        double totalmathHrs = 0;        // This calculates the total math hours
        
        for (int j = 0; j < numDays; j++)
        {
            

            cout << "Enter student " << i+1 << " day " << j+1 << " programming hours" << ": "; // I added +1 so it can tell user to enter amount for mon 1 instead of month 0
            cin >> programmingHrs;
            totalprogrammingHrs += programmingHrs;
            programaverage = totalprogrammingHrs / numDays;

            

            cout << "Enter student " << i+1 << " day " << j+1 <<" math hrs" << ": ";
            cin >> mathHrs;
            totalmathHrs += mathHrs;
            mathaverage = totalmathHrs / numDays;

        }
        
        // Output to end user
        cout << "The average number of hours per day spent programming by student " << i+1 << " is " << programaverage << endl; 
        cout << "The average number of hours per day spent on math by student " << i+1 << " is "<< mathaverage << endl; 

        // If and else statement to set a condition
        if(programaverage > mathaverage & mathaverage < programaverage)
        {
            cout << "This student averaged more time on programming. " << endl;
        }
    
        else if (mathaverage > programaverage)
        { 
            cout << "This student averaged more time on math. " << endl;
        }
        
        
        if  (programaverage == mathaverage)
        {
            cout << "This student spent equal time on programming and math. " << endl;
        }
        
        cout << "====================================================" << endl;
        
    }
    return 0;

}