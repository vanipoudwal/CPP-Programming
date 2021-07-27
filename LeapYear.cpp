#include<iostream.h>
#include<conio.h>

void main()
{
	int year;

	clrscr();

	cout << "enter the year :: ";
	cin >> year;

	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " is a leap year";
			else
				cout << year << " is not a leap year";
		}
		else
		{
			cout << year << " is a leap year";
		}
	}
	else
	{
		cout << year << " is not a leap year";
	}
	getch();
}