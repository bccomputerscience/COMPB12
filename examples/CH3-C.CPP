/*	Eddie Rangel					*/
/*	COMS B35 OOP C++				*/
/*	CH3-C.CPP						*/
/*	2-5-03							*/
/*	Asks user for numbers			*/
/*	Returns powers					*/

#include<iostream.h>
#include<conio.h>
#include<math.h>

long int power(long int&, long int&);
double power(double&, double&);

main()
{
	long int a,b;
	double c,d;

	clrscr();

	cout << "Please enter two integer numbers: ";
	cin >> a >> b;
	cout << "Your first number raised to your second: ";
	cout << power(a,b) << '\n';
	cout << "Please enter two decimal numbers: ";
	cin >> c >> d;
	cout << "Your first number raised to your second: ";
	cout << power(c,d) << '\n';

	return 0;

}
long int power(long int &a, long int &b)
{
	long int counter;
	long int product = 1;

	for(counter = 1; counter <= b; ++counter)
		   product *= a;
	return product;

}
double power(double &c, double &d)
{
	double product = exp(log(c) * d);
	return product;
}

