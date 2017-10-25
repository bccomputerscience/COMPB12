/*
*/
#include<iostream>
#include <iomanip>
using namespace std;

void displayScores(float *,int);
float calculateAverage(float *,int);
char determineLetterGrade(float);
void getScores(float *, int);

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
        cout << "\nEnter the scores below\n";
        getScores(scores, numOfScores);
    }

    
    cout << "Your the scores below:\n";
    cout << "----------------------------------------------------" << endl;
    displayScores(scores, numOfScores);
    cout << "----------------------------------------------------" << endl;
    float average = calculateAverage(scores, numOfScores);

    cout << fixed << setprecision(2);
    cout << "Average score: " << average << "\tGrade: "<< determineLetterGrade(average) << endl;
    cout << endl;

    delete [] scores;
    scores = nullptr;

}

//
void getScores(const float *array, int size)
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

void displayScores(const float *array, int size)
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

float calculateAverage(const float *array, int size)
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
    char letterGrade = 'Z';
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

void bubbleSortArray(const float *array, int size)
{
   int  temp;
   bool swap;
   int bottom = size-1;
   
   do
   {
      swap = false;
      
      for (int count = 0; count < bottom; count++)
      {
         if (array[count] < array[count+1])
         {
            temp = array[count];
            array[count] = array[count+1];
            array[count+1] = temp;
            swap = true;
         }
      }
      bottom--;
      
   } while (swap != false);
}

int searchList(const float *array, int size, float value)
{
   for (int count = 0;count < size; count++)
   {
      if (array[count] == value)
         return count;
   }
   return -1;
}