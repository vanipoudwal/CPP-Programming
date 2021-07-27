#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	
	for(i=0; i<3; i++)
	{
		for(j=1; j<3; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	getch();
}