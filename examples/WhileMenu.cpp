/*	Eddie Rangel					*/
/*	Programming Methodology         */
/*	2-1-17 							*/

#include<iostream>
#include<cstdlib>
using namespace std;

int valueOne, valueTwo;

void displayMenu();
int mainMenu();
void get_ints(int *, int *);
void order_ints(int *, int *);
void swap_ints(int *, int *);

int main()
{
    displayMenu();
}

int mainMenu()
{
    int input = 0;
    cout << "*******************" << endl << endl;
    cout << "Please choose from the following options: " << endl;
    cout << "1: Get Two Integers " << endl;
    cout << "2: Order Two Integers " << endl;
    cout << "3: Swap Two Integers" << endl;
    cout << "0: Exit " << endl;
    cout << "*******************" << endl << endl;
    cin >> input;

    return input;
}

void displayMenu()
{
    int input = 0;    

    cout << "*******************" << endl;
    cout << "Welcome to my Menu" << endl;
    input = mainMenu();

    while(input != 0)
    {
        switch(input)
        {
            case 1: cout << "Please enter two integers: ";
                    get_ints(&valueOne, &valueTwo);
                    cout << "You entered: " << valueOne << ' ' << valueTwo << endl;
                    break;
            case 2: cout << "Your integers put in order: ";
                    order_ints(&valueOne, &valueTwo);
                    cout << valueOne << ' ' << valueTwo << endl;
                    break;
            case 3: cout << "Your integers swapped: ";
                    swap_ints(&valueOne, &valueTwo);
                    cout << valueOne << ' ' << valueTwo << endl;
                    break;
            case 0: cout << "Goodbye!";
                    exit(EXIT_SUCCESS);
                    break;
        }
        input = mainMenu();
    }
}

void get_ints(int *valueOne, int *valueTwo)
{
    cin >> *valueOne >> *valueTwo;
	return;
}

void order_ints(int *valueOne, int *valueTwo)
{
	int temp;
	if(*valueOne > *valueTwo)
	{
		temp = *valueOne;
		*valueOne = *valueTwo;
		*valueTwo = temp;
	}
	return;
}
void swap_ints(int *valueOne, int *valueTwo)
{
	int temp;
	temp = *valueOne;
	*valueOne = *valueTwo;
	*valueTwo = temp;
	return;
}

