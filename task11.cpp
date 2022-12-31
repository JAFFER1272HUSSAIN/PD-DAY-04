#include<iostream>
using namespace std;
void speed(int);
main()
{
	int s;
	cout << "Enter Speed: ";
	cin >> s;
	speed(s);
}
void speed(int s)
{
	if (s <= 100)
	{
		cout <<"Perfect! You're going good";
	}
	if (s > 100)
	{
		cout <<"Halt....YOU WILL BE CHALLANGED!!!";
	}
}
