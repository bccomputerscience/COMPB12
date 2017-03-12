/*	Eddie Rangel					*/
/*	Programming Methodology         */
/*	2-1-17 							*/

#include<iostream>
#include<cstdlib>
using namespace std;

int displayMenu();
void mainMenu();
void get_ints(int *, int *);
void order_ints(int *, int *);
void swap_ints(int *, int *);

int main()
{
    mainMenu();
}

int displayMenu()
{
    int input = 0;
    cout << "*******************" << endl;
    cout << "Please choose from the following options: " << endl;
    cout << "1: Get Two Integers " << endl;
    cout << "2: Order Two Integers " << endl;
    cout << "3: Swap Two Integers" << endl;
    cout << "0: Exit " << endl;
    cout << "*******************" << endl;
    cout << "Choice: ";
    cin >> input;

    return input;
}

void mainMenu()
{
    int valueOne, valueTwo;
    int option = 0;    

    cout << "*******************" << endl;
    cout << "Welcome to my Menu" << endl;
    option = displayMenu();

    while(option != 0)
    {
        switch(option)
        {
            case 1: cout << "Please enter two integers: ";
                    get_ints(&valueOne, &valueTwo);
                    cout << "You entered: " << valueOne << ' ' << valueTwo << endl << endl;
                    break;
            case 2: cout << "Your integers put in order: ";
                    order_ints(&valueOne, &valueTwo);
                    cout << valueOne << ' ' << valueTwo << endl;
                    break;
            case 3: cout << "Your integers swapped: ";
                    swap_ints(&valueOne, &valueTwo);
                    cout << valueOne << ' ' << valueTwo << endl;
                    break;
            default: cout << "You entered an invalid choice." << endl;
        }
        option = displayMenu();
    }
    cout << "Goodbye!" << endl;
    exit(EXIT_SUCCESS);
}

void get_ints(int *valueOne, int *valueTwo)
{
    cin >> *valueOne >> *valueTwo;	
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
}
void swap_ints(int *valueOne, int *valueTwo)
{
	int temp;
	temp = *valueOne;
	*valueOne = *valueTwo;
	*valueTwo = temp;
}

