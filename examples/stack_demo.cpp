/*	Eddie Rangel					*/


#include<iostream.h>
#include<conio.h>
#include<ctype.h>

const int max_len = 5;
enum {EMPTY = -1, FULL = max_len - 1};
//enum boolean{false,true}; 			/* This is for B.C. commons only */

struct stack
{
	double d[max_len];
	int top;
}mystack;

void reset(stack &stk);
void push(double, stack &stk);
double pop(stack &stk);
double peek(const stack &stk);
bool full(const stack &stk);
bool empty(const stack &stk);

main()
{
	double nmbr;
	char c;
	//clrscr();
	reset(mystack);
	cout << "Please enter +, -, P, C, or Q: ";
	cin >> c;
	c = toupper(c);
	while(c != 'Q')
	{
		switch(c)
		{
			case '+':
				if(full(mystack))
					cout << "Your stack is full\n";
				else
				{
					cout << "Please enter a number: ";
					cin >> nmbr;
					push(nmbr, mystack);
				}
				break;
			case '-':
				if(empty(mystack))
					cout << "Your stack is empty\n";
				else
				{
					cout << "This is your number: ";
					cout << pop(mystack) << '\n';
				}
				break;
			case 'P':
				if(empty(mystack))
					cout << "Your stack is empty\n";
				else
				{
					cout << "This is your number: ";
					cout << peek(mystack) << '\n';
				}
				break;
			case 'C':
				reset(mystack);
				break;
			default:
				cout << "You have entered invalid data!";
		}
		cout << "Please enter +, -, P, C, or Q: ";
		cin >> c;
		c = toupper(c);
	}
	return 0;
}
void reset(stack &stk)
{
	stk.top = EMPTY;
	return;
}
void push(double nmbr, stack &stk)
{
	stk.d[++stk.top] = nmbr;
	return;
}
double pop(stack &stk)
{
	return stk.d[stk.top--];
}
double peek(const stack &stk)
{
	return stk.d[stk.top];
}
bool full(const stack &stk)
{
	return stk.top == FULL;
}
bool empty(const stack &stk)
{
	return stk.top == EMPTY;
}





