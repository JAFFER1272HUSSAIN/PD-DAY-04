#include<iostream>
using namespace std;
void discount(int,string);
main()
{
	string name;
	int price;
	while(true)
	{
	cout << "Enter Country's Name: ";
	cin >> name;
	cout << "Enter Ticket price: ";
	cin >> price;
	discount(price,name);
    }
}
void discount(int price,string name)
{
	float discount,totalprice;
	if (name == "pakistan")
	{
		discount = 0.05 * price;
		totalprice = price - discount;
	    cout << "Final price of the ticket after the discount: "<< totalprice << endl;
    }
    if (name == "ireland")
    {
    	discount = 0.1 * price;
    	totalprice = price - discount;
    	cout << "Final price of the ticket after the discount: "<< totalprice << endl;
	}
    if (name == "india")
    {
    	discount = 0.2 * price;
    	totalprice = price - discount;
    	cout << "Final price of the ticket after the discount: "<< totalprice << endl;
	}
	if (name == "england")
	{
		discount = 0.3 * price;
		totalprice = price - discount;
		cout << "Final price of the ticket after the discount: "<< totalprice << endl;
	}
	if (name == "canada")
	{
		discount = 0.45 * price;
		totalprice = price - discount;
		cout << "Final price of the ticket after the discount: "<< totalprice << endl;
	}
}
