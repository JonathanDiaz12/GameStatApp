#include <iostream>
#include <iomanip>
using namespace std;

//Initialize the variables
string PlayerFirstName;
string PlayerLastName;
double Score = 0;
double HoursPlayed = 1;
double ScorePerHour = 0;

int main()
{
    //This block of code takes input from the user 
    cout << setprecision (2) << fixed;
    cout<<"Enter the players First Name:"<<endl;
    cin>> PlayerFirstName;
    cout<<"Enter the players Last Name:"<<endl;
    cin>>PlayerLastName;
    cout<<"Enter the score of the player:"<<endl;
    cin>>Score;
    cout<<"Enter the amount of hours the player played:"<<endl;
    cin>>HoursPlayed;

    //This is the formula for the score per hour
    ScorePerHour =(Score/HoursPlayed);

    //outputs the results to the user in a nice format with 2 decimal points.
    cout<<"__________"<<endl;
    cout<<PlayerFirstName<<" "<<PlayerLastName<<endl;
    cout<<"Score: "<<Score<<endl;
    cout<<"Hours Played: "<<HoursPlayed<<endl;
    cout<<"Score per hour: "<<ScorePerHour<<endl;
    cout<<"__________"<<endl;

    return 0;
}