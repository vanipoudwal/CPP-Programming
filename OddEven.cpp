#include<iostream.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	cout << "enter the number :: ";
	cin >> num;
	if(num % 2 == 0)
	{
		cout << "it's an even number";
	}
	else
	{
		cout << "it's an odd number";	
	}
}