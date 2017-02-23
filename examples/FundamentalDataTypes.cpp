/*
    Programmer: Eddie Rangel
    File Name: FundamentalDataTypes.cpp
    Description: Displays data types and their attributes.
*/

#include<iostream>
#include<climits>
#include<cfloat>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(50) << "================================" << endl
         << setw(50) << "Fundamental Data Types in C++ 11" << endl
         << setw(50) << "================================" << endl;

    cout << "Data Type" << setw(10) << "Bytes" << setw(21) << "Minimum" << setw(21) << "Maximum" << endl
         << "short" << setw(14) << sizeof(short) << setw(21) << SHRT_MIN << setw(21) << SHRT_MAX << endl
         << "int" << setw(16) << sizeof(int) << setw(21) << INT_MIN << setw(21) << INT_MAX <<endl
         << "unsigned int" << setw(7) << sizeof(unsigned int) << setw(21) << 0 << setw(21) << UINT_MAX <<endl
         << "long int" << setw(11) << sizeof(long int) << setw(21) << LONG_MIN << setw(21) << LONG_MAX <<endl
         << "float" << setw(14) << sizeof(float) << setw(21) << FLT_MIN  << setw(21) << FLT_MAX  <<endl
         << "double" << setw(13) << sizeof(double) << setw(21) <<  DBL_MIN  << setw(21) <<  DBL_MAX  <<endl
         << "long double" << setw(8) << sizeof(long double) << setw(21) << LDBL_MIN << setw(21) << LDBL_MAX <<endl
         << endl;

    cout << "*These values are platform dependent." << endl;

}