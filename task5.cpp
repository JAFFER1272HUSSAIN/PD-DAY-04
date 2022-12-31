#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printJ(int,int);
void printA(int,int);
void print(int,int);
void printF(int,int);
void printE(int,int);
void printR(int,int);
main()
{
	int x = 25;
	int y = 10;
	printJ(x,y);
	printA(x,y);
	print(x,y);
	printF(x,y);
	printE(x,y);
	printR(x,y);
}
void gotoxy(int x,int y)
{
	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printJ(int x,int y)
{
	gotoxy(x,y);
	cout << "))))))))))";
    gotoxy(x,y+1);
	cout << "    ))    ";
    gotoxy(x,y+2);
	cout << "    ))    ";
    gotoxy(x,y+3);
	cout << ")   ))    ";
	gotoxy(x,y+4);
	cout << "))))))    ";
}
void printA(int x,int y)
{
	gotoxy(x+12,y);
	cout << "   )))    ";
	gotoxy(x+12,y+1);
	cout << "  )) ))   ";
	gotoxy(x+12,y+2);
	cout << " )))))))  ";
	gotoxy(x+12,y+3);
	cout << " ))   ))  ";
	gotoxy(x+12,y+4);
	cout << " ))   ))  ";
}
void print(int x,int y)
{
	gotoxy(x+22,y);
	cout << "))))))))";
	gotoxy(x+22,y+1);
	cout << "))      ";
	gotoxy(x+22,y+2);
	cout << ")))))   ";
	gotoxy(x+22,y+3);
	cout << "))      ";
	gotoxy(x+22,y+4);
	cout << "))      ";
}

void printF(int x,int y)
{
	gotoxy(x+32,y);
	cout << "))))))))";
	gotoxy(x+32,y+1);
	cout << "))      ";
	gotoxy(x+32,y+2);
	cout << ")))))   ";
	gotoxy(x+32,y+3);
	cout << "))      ";
	gotoxy(x+32,y+4);
	cout << "))      ";
}
void printE(int x,int y)
{
	gotoxy(x+42,y);
	cout << "))))))))";
	gotoxy(x+42,y+1);
	cout << "))      ";
    gotoxy(x+42,y+2);
	cout << ")))))   ";
	gotoxy(x+42,y+3);
	cout << "))      ";
	gotoxy(x+42,y+4);
	cout << "))))))))";
}
void printR(int x,int y)
{
	gotoxy(x+52,y);
	cout << ")))    ";
	gotoxy(x+52,y+1);
	cout << ")) ))  ";
	gotoxy(x+52,y+2);
	cout << ")))    ";
	gotoxy(x+52,y+3);
	cout << ")) ))  ";
	gotoxy(x+52,y+4);
	cout << "))  )) ";
}
