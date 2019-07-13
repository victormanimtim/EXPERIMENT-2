#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int main()
{
	int x;

	cout << "Enter a number: ";
	cin >> x;

	if (x > 0) 
	{
		
		int y;
		int z = 0;



		y = 1;
		while ( y <= x)
		{
			z += y;
			++y;
		}
			cout << z;
	}

	else
	{
		cout << "Thank you!";
	}	

	getch();
	return 0;
}