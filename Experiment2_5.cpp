#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std; 
int main()
{
    int x; 
	int y;
	int z = 0;
	int a = 1; 
	int b;
    printf("Enter the number of terms: ");
    scanf("%d", &y);
	
	
    printf("Fibonacci Numbers: ");
    for (x = 1; x <= y; ++x)
    {
		
        printf("%d, ", z);
        b = z + a;
        z = a;
        a = b;
    }
	getch();
    return 0;
}
