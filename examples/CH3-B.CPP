/*	Eddie Rangel					*/
/*	COMS B35 OOP C++				*/
/*	CH3-B.CPP						*/
/*	2-5-03							*/
/*	Asks user for Floats			*/
/*	Returns Value of Function		*/

#include<iostream.h>
#include<conio.h>

float test_def(float = 1.0, float = 2.0,  float = 3.0, float = 4.0);

main()
{
	float a,b,c,d;
	clrscr();
	cout << "Please enter four numbers: ";
	cin >> a >> b >> c >> d;
	cout << "These are your four returned values: ";
	cout << test_def(a,b,c,d) << '\n';
	cout << "Your first three values: ";
	cout << test_def(a,b,c) << '\n';
	cout <<"Your first two values: ";
	cout << test_def(a,b) << '\n';
	cout << "Your first value: ";
	cout << test_def(a) << '\n';
	cout << "No value: ";
	cout << test_def();

	return 0;

}
float test_def(float a, float b, float c, float d)
{
	return a + b + c + d;
}
