#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int cardno;
	int pin;
	cout << "enter the card number :: ";
	cin >> cardno;
	cout << "enter the pin :: ";
	cin >> pin;

	if(cardno == '12345678')
	{
		if(pin == '9090')
		{
			cout << "transaction successful";
		}
		else 
		{
			cout << "it's a invalid";
		}
	}
	else 
	{
		cout << "it's a invalid";
	}
	getch();
}