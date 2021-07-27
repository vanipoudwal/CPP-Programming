#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i;
	int max = 0;
	int arr[5];
	
	cout << "enter the values :: ";

	for(i=0; i<5; i++)
	{
		cin >> arr[i];
	}

	for(i=0; i<5; i++)
	{
		if(arr[i] > max)
		max = arr [i];
	}
	cout << "max is : " << max;
	getch();
}