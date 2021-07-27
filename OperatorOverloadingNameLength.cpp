#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int len = 0;
	int i;
	char arr[5];
	
	cout << "enter the name :: ";
	cin >> arr;

	for(i=0; arr[i] != '\0'; i++)
	{
		len++;
		cout << len;
	}

	for(i=len-1; i>=0; i--)
	{
		cout << arr[i];
	}
	getch();
}