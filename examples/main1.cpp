#include "cmpslib.h"


typedef struct
{
	string Fname;
	string Lname;
	int Age;
} person;

string FirstNames[] ={"Emma","Olivia","Sophia","Isabella","Ava","Mia","Abigail","Emily","Charlotte","Harper", "Noah","Liam","Mason","Jacob","William","Ethan","James","Alexander",	"Michael","Benjamin"};
string LastNames[] = { "Anderson","Brown","Davis","Garcia","Hernandez","Jackson","Johnson","Jones","Martin","Martinez","Miller","Moore","Robinson","Rodriguez","Smith","Taylor","Thomas","Thompson","Williams","Wilson"  };



void PopulatePerson(person& input,int& r1,int& r2, int& r3)
{
	input.Fname = FirstNames[ r1 ];
	input.Lname = LastNames[ r2 ];
	input.Age = r3;
}

void PopulatePerson(person* input,int* r1,int* r2, int* r3)
{
	input->Fname = FirstNames[ *r1 ];
	input->Lname = LastNames[ *r2 ];
	input->Age = *r3;
}

person PopulatePerson(int r1,int r2,int r3)
{
	person temp;
	temp.Fname = FirstNames[ r1 ];
	temp.Lname = LastNames[ r2 ];
	temp.Age = r3;
	return temp;
}




#define MAX_SIZE 1000
#define NUMBER_OF_TESTS 500
int main()
{      


	std::random_device rd;
     std::mt19937 gen(rd());
     std::uniform_int_distribution<> dist_1_99(1,99);
     std::uniform_int_distribution<> dist_0_19(0,19);
    

    int fname=0;
    int lname=0;
    int age=0;

	person People[MAX_SIZE];

	clock_t start,end, overall_pbv=0,overall_pbp=0,overall_pbr=0;


	for (int outerloop=0;outerloop< NUMBER_OF_TESTS;outerloop++)
	{
		start = clock();
		for (int loop=0;loop<MAX_SIZE;loop++)
		{
			fname =dist_0_19(gen);
			lname =dist_0_19(gen);			
			age = dist_1_99(gen);
			People[loop] = PopulatePerson(fname,lname,age);
		}

		end = clock();
		overall_pbv += (end-start);


		start = clock();
		for (int loop=0;loop<MAX_SIZE;loop++)
		{
			fname =dist_0_19(gen);
			lname =dist_0_19(gen);			
			age = dist_1_99(gen);
			PopulatePerson(People[loop],fname,lname,age);
		}
			
		end = clock();
		overall_pbr += (end-start);


		start = clock();
		for (int loop=0;loop<MAX_SIZE;loop++)
		{
			fname =dist_0_19(gen);
			lname =dist_0_19(gen);			
			age = dist_1_99(gen);
			PopulatePerson(&People[loop],&fname,&lname,&age);
		}
			
		end = clock();

		overall_pbp += (end-start);
	}


	cout << "PBV  time:" << (double) overall_pbv  << endl;


	cout << "PBR  time:" << (double) overall_pbr  << endl;
	cout << "PBP  time:" << (double) overall_pbp  << endl;


	return 0;
}

