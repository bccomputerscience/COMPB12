/*
    Programmer: Eddie Rangel
    File Name: FundamentalDataTypes.cpp
    Description: Displays data types and their attributes.
*/

#include<iostream>
#include<climits>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Fundamental Data Types in C++ 11" << endl;

    cout << "Data Type" << setw(10) << "Bytes" << setw(15) << "Minimum" << setw(15) << "Maximum" << endl;
    cout << "Short" << setw(14) << sizeof(short) << setw(15) << SHRT_MIN << setw(15) << SHRT_MAX << endl;
    cout << "Int" << setw(16) << sizeof(int) << setw(15) << INT_MIN << setw(15) << INT_MAX <<endl;

}