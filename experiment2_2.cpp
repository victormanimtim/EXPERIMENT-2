#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Water Bill"<<endl;

	double x;
	double y;
	double z;


	cout << "Previous Month's Reading(gallons): ";
	cin >> x;

	cout << "This Month's Reading(gallons): ";
	cin >> y;


	cout << "Total bill: P" << (y - x)*1.10 << endl;



	cout << "Unpaid Balance: P";
	cin >> z;



	if (z == 0 )
		cout << "Water Bill: P" <<  35 + ((y - x)*1.10) + 0;
	else
		cout << "Water Bill: P" <<  35 + ((y - x)*1.10) + 20;




	getch();
	return 0;
}