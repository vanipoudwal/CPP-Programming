#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[3][3];
	int i,j;
	int max = 0;
	int secmax;
	
	cout << "enter any 9 numbers :: ";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "enter any 9 numbers :: ";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if (arr[i][j] > max);
			{
				secmax = max;
				max = arr[i][j];
			}
			cout << max << endl;
		}
		cout << "max :: " << max << endl;
		cout << "second max :: " << secmax;
	}
	getch();
}