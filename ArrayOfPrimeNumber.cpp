#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[5];
	int i,j;
	
	for(i=0; i<5; i++)
	{
		cout << "enter the number :: ";
		cin >> arr[i];
		
		for(i=1; i<5; i++)
		{
			if(arr[i]%2 == 0)
			{
				cout << arr[i] << "is even" << endl;

				for(j=1; j<10; j++)
				{
					cout << (arr[i]*j) << endl;
				}
			}
			else
			{
				cout << "odd";
			}
		}
	getch();
}