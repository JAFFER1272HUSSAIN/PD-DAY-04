#include<iostream>
using namespace std;
void tom_sleep(int,int,int,int);
int main()
{
    int holidays,working,games,norm;
    tom_sleep(holidays,working,games,norm);
}
void tom_sleep(int holidays,int working, int games,int norm)
{
    cout << "Holidays: ";
    cin >> holidays;
    working = 365 - holidays;
    games = (working * 63 + holidays * 127);
    norm = 30000 - games;
    cout << "Tom sleeps well for: " << norm << " minutes less for play" <<endl;
}
