#include "cmpslib.h"

void DoubleTheInt1(int in)
{
cout << "\tinside the function \"void DoubleTheInt1(int )\" in has the address of " << & in << " and the value of " << in << endl;

in *=2;

cout << "\tinside the function \"void DoubleTheInt1(int )\" in has the address of " << & in << " and the value of " << in << endl;
}


void DoubleTheInt2(int * in)
{
cout << "\tinside the function \"void DoubleTheInt2(int )\" in has the address of " <<  in << " and the value of " << *in << endl;

*in *=2;

cout << "\tinside the function \"void DoubleTheInt2(int )\" in has the address of " <<  in << " and the value of " << *in << endl;
}

int main()
{
int temp =999;

cout << endl << endl << "Pass by value " << endl;
cout << "inside the function \"int main() \" temp has the address of " << & temp << " and the value of " << temp << endl;

DoubleTheInt1( temp );

cout << "inside the function \"int main() \" temp has the address of " << & temp << " and the value of " << temp << endl;




	
cout << endl << endl << "Now pass by reference " << endl;

cout << "inside the function \"int main() \" temp has the address of " << & temp << " and the value of " << temp << endl;

DoubleTheInt2( & temp );

cout << "inside the function \"int main() \" temp has the address of " << & temp << " and the value of " << temp << endl;
	







return 0;
}

