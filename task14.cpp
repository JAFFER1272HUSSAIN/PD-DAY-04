#include<iostream>
using namespace std;
void printMenu();
void calculateAggregateS1(string, float, float, float);
void calculateAggregateS2(string,float, float,float);
void cal(int,string,float,float,float,string,float,float,float);
void aggcalS1(string, float, float, float);
void aggcalS2(string,float, float, float);
void compareMarks(string, float, string, float);
int main()
{
	int press;
	string nameStd1;
	float matricMarksF,interMarksF,ecatMarksF;
	string nameStd2;
	float matricMarksS,interMarksS,ecatMarksS;
	cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}
void cal(int press,string nameStd1, float matricMarksF, float interMarksF, float ecatMarksF,string nameStd2,float matricMarksS, float interMarksS,float ecatMarksS)
{
	float ecatMarksStd1,ecatMarksStd2;
    system("cls");
    printMenu();
    cout << "Welcome to uet management system" << endl << endl << endl;
    cout << "Press 1 to Enter details of first student!" << endl;
    cout << "Press 2 to Enter details of second student!" << endl;
    cout << "Press 3 to calculate the aggreagate of the first student!" << endl;
    cout << "Press 4 to calculate the aggreagte of the second student!" << endl;
    cout << "Press 5 to display the sudent with RollNumber 01!" << endl;
    cout << "Select One of above options: ";
    cin >> press;
    if (press > 5)
    {
        system("cls");
        cout << "Invalid Option......" << endl;
        cout << "Press Valid Option....." << endl;
        cin >> press;
        if (press < 5)
        {
            cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
        }
    }
    if (press == 1)
    {
    	calculateAggregateS1(nameStd1,matricMarksF,interMarksF,ecatMarksF);
    }
    if (press == 2)
    {
    	calculateAggregateS2(nameStd2,matricMarksS,interMarksS,ecatMarksS);
    }
    if (press == 3)
    {
    	aggcalS1(nameStd1,matricMarksF,interMarksF,ecatMarksF);
    }
    if (press == 4)
    {
    	aggcalS2(nameStd2,matricMarksS,interMarksS,ecatMarksS);
	}
    if (press == 5)
    {
    	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
    }
}
void printMenu()
{
    cout << "**********************************" << endl;
    cout << "*                                *" << endl;
    cout << "*     UNIVERSITY ADMISSION       *" << endl;
    cout << "*      MANAGEMENT SYSTEM         *" << endl;
    cout << "*                                *" << endl;
    cout << "**********************************" << endl << endl << endl << endl;
}
void calculateAggregateS1(string nameStd1, float matricMarksF, float interMarksF, float ecatMarksF)
{
	int press;
	string nameStd2;
	float matricMarksS,interMarksS,ecatMarksS;
	float ecatMarksStd1{};
    char al;
    system("cls");
    cout << "Enter Your Name: ";
    cin >> nameStd1;
    cout << "Enter Your Matric Marks(Out of 1100): ";
    cin >> matricMarksF;
    cout << "Enter Your floater Marks(Out of 550): ";
    cin >> interMarksF;
    cout << "Enter Your Ecat Marks(Out of 400): ";
    cin >> ecatMarksF;
    cout << "Press any key to continue.....";
    cin >> al;
    cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}
void calculateAggregateS2(string nameStd2,float matricMarksS, float interMarksS,float ecatMarksS)
{
	int press;
	string nameStd1;
	float matricMarksF,interMarksF,ecatMarksF;
	float ecatMarksStd2; 
    char al;
    system("cls");
    cout << "Enter Your Name: ";
    cin >> nameStd2;
    cout << "Enter Your Matric Marks(Out of 1100): ";
    cin >> matricMarksS;
    cout << "Enter Your floater Marks(Out of 550): ";
    cin >> interMarksS;
    cout << "Enter Your Ecat Marks(Out of 400): ";
    cin >> ecatMarksS;
    cout << "Press any key to continue.....";
    cin >> al;
    cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}
void aggcalS1(string nameStd1, float matricMarksF, float interMarksF, float ecatMarksF)
{
	int press;
    string nameStd2;
	float matricMarksS,interMarksS,ecatMarksS;
    char al;
    float ecatMarksStd1{};
    system("cls");
    ecatMarksStd1 = ((matricMarksF / 1100) * 30) + ((interMarksF / 550) * 30) + ((ecatMarksF / 400) * 40);
    cout << "First student's Aggreagte is: " << ecatMarksStd1<<endl;
    cout << "Press any key to continue....." << endl;
    cin >> al;
    cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}
void aggcalS2(string nameStd2,float matricMarksS, float interMarksS, float ecatMarksS)
{
	int press;
	string nameStd1;
	float matricMarksF,interMarksF,ecatMarksF;
    char al;
	float ecatMarksStd2{};
    system("cls");
    ecatMarksStd2 = ((matricMarksS / 1100) * 30) + ((interMarksS / 550) * 30) + ((ecatMarksS / 400) * 40);
    cout << "First student's Aggreagte is: " << ecatMarksStd2<<endl;
    cout << "Press any key to continue....." << endl;
    cin >> al;
    cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
{
	int press;
	float matricMarksF,interMarksF,ecatMarksF,matricMarksS,interMarksS,ecatMarksS;
	char al;
	system("cls");
	if (ecatMarksStd1 > ecatMarksStd2)
	{
		cout << "First Student Has Roll Number 1"<<endl;
	}
	if (ecatMarksStd1 < ecatMarksStd2)
	{
		cout << "Second Student Has Roll Number 1"<<endl;
	}
	cout << "Press any key to continue...." << endl;
	cin >> al;
	cal(press,nameStd1,matricMarksF,interMarksF,ecatMarksF,nameStd2,matricMarksS,interMarksS,ecatMarksS);
}

