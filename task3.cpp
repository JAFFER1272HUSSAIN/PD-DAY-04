#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void playermove(int,int);
main()
{
	system("cls");
	printMaze();
	int x = 4;
	int y = 4;
	playermove(x,y);
}
void gotoxy(int x,int y)
{
	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printMaze()
{
	cout << "##########################"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "#                        #"<<endl;
    cout << "##########################"<<endl;
}
void playermove(int x,int y)
{
	gotoxy(x-1,y);
	cout << " ";
	gotoxy(x,y);
	cout << "P";
	Sleep(500);
}
