/*	Eddie Rangel					*/
/*	COMS B35 OOP C++				*/
/*	CH2.CPP							*/
/*	2-1-04 							*/
/*	Asks user for Integers			*/
/*  Does calculations				*/
/*	Plays with nubers				*/
/*  By passing by value and			*/
/*  By reference					*/

#include<iostream.h>
#include<conio.h>

void get_ints(int *, int *);
void order_ints(int *, int *);
void swap_ints(int *, int *);

main()
{
	int a,b;

    clrscr();
 	cout << "Please enter two integers: ";
	get_ints(&a,&b);
	cout << "Your integers Added together: ";
	cout << (a + b) << '\n';
	cout << "Subtracted: ";
	cout << (a - b) << '\n';
	cout << "Multiplied: ";
	cout << (a * b) << '\n';
	cout << "Quotient: ";
	cout << (a / b) << '\n';
	order_ints(&a,&b);
	cout << "Your integers put in order: ";
	cout << a << ' ' << b << '\n';
	swap_ints(&a,&b);
	cout << "Your integers swapped: ";
	cout << a << ' ' << b;
    //system("PAUSE");  // only for DevCpp
	return 0;
}
void get_ints(int *a,int *b)
{
	cin >> *a >> *b;
	return;
}
void order_ints(int *a, int *b)
{
	int t;
	if(*a > *b)
	{
		t = *a;
		*a = *b;
		*b = t;
	}
	return;
}
void swap_ints(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	return;
}
