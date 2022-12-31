#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printA(int,int);
void printW(int,int);
void print(int,int);
void printI(int,int);
void printS(int,int);

main()
{
	int x,y;
	x = 25;
	y = 1;
	printA(x,y);
	printW(x,y);
	print(x,y);
	printI(x,y);
	printS(x,y);
}
void gotoxy(int x,int y)
{
	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printA(int x,int y)
{
	gotoxy(x,y);
	cout << "   )))    ";
	gotoxy(x,y+1);
	cout << "  )) ))   ";
	gotoxy(x,y+2);
	cout << " )))))))  ";
	gotoxy(x,y+3);
	cout << " ))   ))  ";
	gotoxy(x,y+4);
	cout << " ))   ))  "<<endl;
}
void printW(int x,int y)
{
	gotoxy(x,y+5);
	cout << "))          ))";
	gotoxy(x,y+6);
	cout << " ))        )) ";
	gotoxy(x,y+7);
	cout << "  ))  ))  ))  ";
	gotoxy(x,y+8);
	cout << "   )))  )))   ";
	gotoxy(x,y+9);
	cout << "    ))  ))    "<<endl;
}
void print(int x,int y)
{
	gotoxy(x,y+10);
	cout << "   )))    ";
	gotoxy(x,y+11);
	cout << "  )) ))   ";
	gotoxy(x,y+12);
	cout << " )))))))  ";
	gotoxy(x,y+13);
	cout << " ))   ))  ";
	gotoxy(x,y+14);
	cout << " ))   ))  "<<endl;
}
void printI(int x,int y)
{
	gotoxy(x,y+15);
	cout << "))))))))";
	gotoxy(x,y+16);
	cout << "   ))   ";
	gotoxy(x,y+17);
	cout << "   ))   ";
	gotoxy(x,y+18);
	cout << "   ))   ";
	gotoxy(x,y+19);
	cout << "))))))))"<<endl;
}
void printS(int x,int y)
{
	gotoxy(x,y+20);
	cout << "(((((((((";
	gotoxy(x,y+21);
	cout << "((       ";
	gotoxy(x,y+22);
	cout << "(((((((((";
	gotoxy(x,y+23);
	cout << "       ((";
	gotoxy(x,y+24);
	cout << "((((((((("<<endl;
}
