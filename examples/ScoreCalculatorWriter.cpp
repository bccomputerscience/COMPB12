/*
*/
#include <fstream>
#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

void displayScores(float *,int);
float calculateAverage(float *,int);
char determineLetterGrade(float);
void getScores(float *, int);
void writeGrades(float *, int size, string filename);

int main()
{
    float *scores = nullptr;
    int numOfScores; // number of sales to be processed int count; // loop counter
    
    cout << "How many test scores will be processed? ";
    cin >> numOfScores;

    scores = new float[numOfScores];

    if ( scores == nullptr )
    {
       cout << "Error allocating memory!\n";
       return 1;
       //TODO use exit failure
    }
    else
    {
        cout << "Enter the scores below\n";
        getScores(scores, numOfScores);
    }

    
    cout << "Writing your scores to disk.....\n";
    string filename = "erangel_grades.txt";
    writeGrades(scores, numOfScores,filename);
    cout << "\nDone.\n" << endl;
  
    delete [] scores;
    scores = nullptr;

}

void getScores(float *array, int size)
{   
    float value = -1.0;
    int sentinal = -1;
    
    for (int count = 0; count < size;  count++)
    {
        cout << "Score number  "
            <<  (count + 1) << ":";
        cin >> value;
        while(value < 0.0)
        {
            if(value == sentinal)
            {
             exit(EXIT_FAILURE);   
            }
            cout << "Invalid value: " << value; 
            cout << "Please enter a valid test score ";
            cin >> value;
        }
        array[count] = value;
    }
}

void displayScores(float *array, int size)
{
    for (int count = 0; count < size;  count++)
    {
        cout << "Score number "
            <<  (count + 1) << ": ";
        cout << array[count];
        cout << "\tGrade: ";
        cout << determineLetterGrade(array[count]);
        cout << endl;
    }
}

void writeGrades(float *array, int size, string output)
{
   ofstream outfile;
   
   outfile.open(output);
   outfile << fixed << setprecision(2);
   for (int count = 0; count < size;  count++)
   {
        outfile << "Score number "
        <<  (count + 1) << ": ";
        outfile << array[count];
        outfile << "\tGrade: ";
        outfile << determineLetterGrade(array[count]);
        outfile << endl;
   }
   float average = calculateAverage(array, size);
   outfile << "Average score: " << average << "\tGrade: "<< determineLetterGrade(average) << endl;
   outfile << endl;
   outfile.close();
}

float calculateAverage(float *array, int size)
{
    float total = 0.0;
    float average = 0.0;

    for (int count = 0; count < size; count++)
    {
        total = total + array[count];
    }
    average = total / size;
    return average;
}

char determineLetterGrade(float value)
{
    char letterGrade = 0;
    if(value >= 90.0)
        letterGrade = 'A';
    else if(value >= 80.0)
        letterGrade = 'B';
    else if(value >= 70.0)
        letterGrade = 'C';
    else if(value >= 60.0)
        letterGrade = 'D';
    else
        letterGrade = 'F';
    return letterGrade;

}
//*******************************************************************
//                     binarySearch
//
// task:      This searches an array for a particular value
// data in:       List of values in an orderd array, the number of
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************
int binarySearch(float *array,int size,int value) //function heading
{
   int first = 0;              // First element of list
   int last = size - 1;    // last element of the list
   int middle;                 // variable containing the current
                               // middle value of the list

   while (first <= last)
   {
      middle = first + (last - first) / 2;

      if (array[middle] == value)
         return middle;             // if value is in the middle, we are done

      else if (array[middle]>value)
         last = middle - 1;         // toss out the second remaining half of
                                    // the array and search the first
      else
         first = middle + 1;        // toss out the first remaining half of
                                    // the array and search the second
   }
   return -1;                       // indicates that value is not in the array
}

//******************************************************************
//                      selectionSortArray
//
// task:      to sort values of an array in ascending order
// data in:       the array, the array size
// data out:      the sorted array
//
//******************************************************************
void selectionSortArray(float *array, int size)
{
   int seek;      // array position currently being put in order
   int minCount;  // location of smallest value found
   int minValue;  // holds the smallest value found

   for (seek = 0; seek < (size-1);seek++)   // outer loop performs the swap
                                             // and then increments seek
   {
      minCount = seek;
      minValue = array[seek];

      for(int index = seek + 1; index < size; index++)
      {
         // inner loop searches through array
         // starting at array[seek] searching
         // for the smallest value. When the
         // value is found, the subscript is
         // stored in minCount. The value is
         // stored in minValue.

         if(array[index] < minValue)
         {
            minValue = array[index];
            minCount = index;
         }
      }

      // the following two statements exchange the value of the
      // element currently needing the smallest value found in the
      // pass(indicated by seek) with the smallest value found
      // (located in minValue)

      array[minCount] = array[seek];
      array[seek] = minValue;
   }
}
