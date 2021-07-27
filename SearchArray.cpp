#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n, i, arr[4];
	
	cout << "enter the size of array :: ";
	cin >> n;

	for(i=0; i<n; i++)
	{
		cout << "enter the elements of array :: ";
		cin >> i;
	}

	cout << "elements are :: " << endl;
	for(i=0; i<n; i++)
	{
		cout << arr[i] + "\t";
	}

	cout << "*** searching of elements ***";
	cout << "enter any elements :: ";
	cin >> n;

	for(i=0; i<n; i++)
	{
		if(arr[i] == n)
		{
			cout << "element found ";
		}
		else
		{
			cout << "not found ";
		}
	}
	getch();
}