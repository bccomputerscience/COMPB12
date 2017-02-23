/*
    Programmer: Eddie Rangel
    File Name: EqualityTestDrive.cpp
    Description: Uses equality operator to 
    test integers.
*/

#include<iostream>
using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "Please enter two integers to compare: ";
    cin >> number1 >> number2;
    cout << endl;

    if(number1 == number2)
        cout << number1 << " == " << number2 << endl;
    if(number1 != number2)
        cout << number1 << " != " << number2 << endl;
    if(number1 < number2)
        cout << number1 << " < " << number2 << endl;
    if(number1 > number2)
        cout << number1 << " > " << number2 << endl;
    if(number1 <= number2)
        cout << number1 << " <= " << number2 << endl;
    if(number1 >= number2)
        cout << number1 << " >= " << number2 << endl;


}