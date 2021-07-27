#include<iostream.h>
#include<conio.h>

void main()
{
	int n,i,r;
	clrscr();
	
	cout << "enter any number :: ";
	cin >> n;

	for(i=1; i<=10; i++)
	{
		r = n * i;
		cout << r;
	}
	getch();
}