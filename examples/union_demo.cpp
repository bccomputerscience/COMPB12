/*	Eddie Rangel					*/
/*	Asks user for a int			*/
/*	HEX value in each byte			*/

#include<iostream>
#include<iomanip>
using namespace std;

union uprgrm
{
	int number;
	unsigned char c[4];

};

main()
{
	uprgrm byte;
	
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

	return 0;

}
