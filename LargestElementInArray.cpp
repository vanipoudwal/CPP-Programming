#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[4], n, i, max, min;
	
	cout << "enter the size of array :: ";
	cin >> n;

	cout << "enter the elements of array :: ";
	for(i=0; i<n; i++)
	{
		cin >> arr[i];

		max = arr[0];	
		for(i=0; i<n; i++)
		{
			if(max < arr[i])
			max = arr[i];
		}

		min = arr[0];
		for(i=0; i<n; i++)
		{
			if(min > arr[i])
			min = arr[i];
		}

		cout << "largest element :: " << max;
		cout << "smallest element :: " << min;
	}
	getch();
}