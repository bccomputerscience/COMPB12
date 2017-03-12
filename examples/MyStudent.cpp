#include <iostream>
#include <string>
using namespace std;

// Student Class Declaration

class Student
{
private:
   string name;        // Student's name
   int idNumber;       // ID number   
   string major;    // Student's major
   
public:
   // Constructors
   Student(string, int, string);
   Student(string, int);
   Student();

   // Mutators
   void setName(string n)
      { name = n; }
      
   void setIdNumber(int i)
      { idNumber = i; }
            
   void setmajor(string p)
      { major = p; }
      
   // Accessors
   string getName()
      { return name; }
      
   int getIdNumber()
      { return idNumber; }
      
   string getmajor()
      { return major; }
};

// Constructor #1
Student::Student(string n, int i, string p)
{
   name = n;
   idNumber = i;   
   major = p;
}

// Constructor #2
Student::Student(string n, int i)
{
   name = n;
   idNumber = i;   
   major = "";
}

// Constructor #3, default constructor
Student::Student()
{
   name = "";
   idNumber = 0;   
   major = "";
}

// Function prototype
void displayStudent(Student);

// Driver program to demonstrate the class
int main()
{
   // Create an Student object to test constructor #1.
   Student david("David Majors", 12345, "Accounting");
   
   // Create an Student object to test constructor #2.
   Student mindy("Mindy James", 12345);
   mindy.setmajor("Computer Science");

   // Create an Student object to test constructor #3.
   Student john;
   john.setName("John Rogers");
   john.setIdNumber(81774);
   john.setmajor("Engineer");
   
   // Display each Student's data.
   displayStudent(david);   
   displayStudent(mindy);
   displayStudent(john);
   
   return 0;
}

//**************************************************
// The displayStudent function displays the data  *
// in the Student object passed as an argument.   *
//**************************************************

void displayStudent(Student e)
{
   cout << "--------------------------" << endl;
   cout << "Name: " << e.getName() << endl;
   cout << "ID Number: " << e.getIdNumber() << endl;
   cout << "major: " << e.getmajor() << endl;
   cout << "--------------------------" << endl;
}