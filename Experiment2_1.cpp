#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << " Package A: For P995/month 10hrs of Internet access are provided. Additional hours are P20/hr." <<endl;
	cout << " Package B: For P1495/month 20hrs of Internet access are provided. Additional hours are P10/hr."<<endl;
	cout << " Package C: For P1995/month unlimited Internet access is provided."<<endl<<endl;

	char internet;
	int Hours;
	cout << "Package chosen: ";
	cin >> internet;

	switch (internet)
	{
	case 'a' :
	case 'A' :
		cout << endl << endl;
		cout << "Hours of Internet access used: ";
		cin >> Hours;

		if (Hours <= 10)
			cout << "Total amount due is: P995"; 
		else if (Hours > 10)
			cout << "Total amount due is: " << (995 + (Hours-10)*20) ;
		else 
			cout << "Invalid Input";

		break;

	case 'b' :
	case 'B' :
		cout << endl<<endl;
		cout << "Hours of internet access used: ";
		cin >> Hours;

		if (Hours <= 20)
			cout << "Total amount due is: P1495"; 
		else if (Hours > 20)
			cout << "Total amount due: " << (1495 + (Hours-20)*10) ;
		else 
			cout << "Invalid Input";

		break;

	case 'c' :
	case 'C' :
		cout << endl<<endl;

		cout << "Total amount due is : P1995" ;

		break;

	default:
		cout << "You must only choose from packages A,B, and C. \n";

	}


	getch();
	return 0;
}