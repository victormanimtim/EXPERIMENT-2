#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()

{
	double x;
	cout << "Counting..." << endl;	

	for (x=1; x<10; x++)
	
		{
			cout << x << ", ";
		}
	
	for (x=10; x>=10, x<=30; x+=2)
	
		{
			cout << x << ", ";
		}
		
	
	getch();
	return 0;
}