#include<iostream>
using namespace std;
void totalprice(int,int,int);
main()
{
	int no_red,no_white,no_tulips;
	cout << "Enter number of red roses: ";
	cin >> no_red;
	cout << "Enter number of white roses: ";
	cin >> no_white;
	cout << "Enter number of tulips: ";
	cin >> no_tulips;	
	totalprice(no_red,no_white,no_tulips);
}
void totalprice(int no_red,int no_white,int no_tulips)
{
	float total,discount,totalprice;
	total = (no_red * 2) + (no_white * 4.10) + (no_tulips * 2.50);
	discount = 0.2 * total;
	totalprice = total - discount;
	cout << "Total price: " << total << endl;
	if (total > 200)
	{
		cout << "Total payable amount after the discount: " << totalprice;
	}
}
