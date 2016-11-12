/*	Eddie Rangel					*/
/*	COMS B35 OOP C++				*/
/*	CH3-A.CPP						*/
/*	2-5-03							*/
/*	Asks user for Integers			*/
/*									*/


#include<iostream.h>
#include<conio.h>

void get_ints(int&, int&);
void order_ints(int&, int&);
void swap_ints(int&, int&);

main()
{
	int a, b;

	clrscr();

	cout << "Please enter two integers: ";
	get_ints(a,b);
	cout << "Your integers Added together: ";
	cout << (a + b) << '\n';
	cout << "Subtracted: ";
	cout << (a - b) << '\n';
	cout << "Multiplied: ";
	cout << (a * b) << '\n';
	cout << "Quotient: ";
	cout << (a / b) << '\n';
	order_ints(a,b);
	cout << "Your integers put in order: ";
	cout << a << ' ' << b << '\n';
	swap_ints(a,b);
	cout << "Your integers swapped: ";
	cout << a << ' ' << b;

	return 0;
}
void get_ints(int &a,int &b)
{
	cin >> a >> b;
	return;
}
void order_ints(int &a, int &b)
{
	int t;
	if(a > b)
	swap_ints(a,b);
	return;
}
void swap_ints(int &a,int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
	return;
}
