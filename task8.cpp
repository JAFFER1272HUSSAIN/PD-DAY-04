#include<iostream>
using namespace std;
void Isequal(int,int);
main()
{
	int x,y;
	cout << "Enter First Number: ";
	cin >> x;
	cout << "Enter Second Number: ";
	cin >> y;
	Isequal(x,y);
}
void Isequal(int x,int y)
{
	if (x == y)
	{
		cout << "True";
	}
	if (x!=y)
	{
		cout << "False";
	}
}
