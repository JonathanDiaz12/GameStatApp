#include <iostream>
#include <iomanip>
using namespace std;


string FirstName;
string LastName;
double Score = 0;
double HoursPlayed = 1;
double ScorePerHour = 0;

int main()
{
    cout << setprecision (2) << fixed;
    cout<<"Enter the players First Name:"<<endl;
    cin>> FirstName;
    cout<<"Enter the players Last Name:"<<endl;
    cin>>LastName;
    cout<<"Enter the score of the player:"<<endl;
    cin>>Score;
    cout<<"Enter the amount of hours the player played:"<<endl;
    cin>>HoursPlayed;

    ScorePerHour +=ScorePerHour+(Score/HoursPlayed);

    cout<<"__________"<<endl;
    cout<<FirstName<<" "<<LastName<<endl;
    cout<<"Score: "<<Score<<endl;
    cout<<"Hours Played: "<<HoursPlayed<<endl;
    cout<<"Score per hour: "<<ScorePerHour<<endl;
    cout<<"__________"<<endl;

    return 0;
}