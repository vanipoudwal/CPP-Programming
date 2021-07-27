#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i;
	char arr[5];
	
	for(i=0; i<5; i++)
	{
		cout << "enter the char : ";
		cin >> arr[i];
	}

	if(arr[0] == arr[4] && arr[1] == arr[3])
	{
		cout << "yes! it's a palindrome";
	}
	else
	{
		cout << "no! it's not a palindrome";
	}
	getch();
}