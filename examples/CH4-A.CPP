/*	Eddie Rangel					*/
/*	COMS B35 OOP C++				*/
/*	CH4-A.CPP						*/
/*	2-13-03							*/
/*	Asks user for a double			*/
/*	HEX value in each byte			*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

union uprgrm
{
	double number;
	unsigned char c[8];

};

main()
{
	uprgrm byte;
	clrscr();
	cout << "Please enter a number: ";
	cin >> byte.number;
	cout << "This is your first byte: ";
	cout << hex << setw(2) <<setfill('0') << (int)(byte.c[0]) << '\n';
	cout << "This is your second byte: ";
	cout << setw(2) << (int)(byte.c[1]) << '\n';
	cout << "This is your third byte: ";
	cout << setw(2) << (int)(byte.c[2]) << '\n';
	cout << "This is your fourth byte: ";
	cout << setw(2) << (int)(byte.c[3]) << '\n';
	cout << "This is your fifth byte: ";
	cout << setw(2) << (int)(byte.c[4]) << '\n';
	cout << "This is your sixth byte: ";
	cout << setw(2) << (int)(byte.c[5]) << '\n';
	cout << "This is your seventh byte: ";
	cout << setw(2) << (int)(byte.c[6]) << '\n';
	cout << "This is your eighth byte: ";
	cout << setw(2) << (int)(byte.c[7]) << '\n';

	return 0;

}
