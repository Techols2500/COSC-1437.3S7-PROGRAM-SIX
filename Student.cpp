//************************************************************************** 
//
// Programming Excerise 6   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017  
//
//************************************************************************** 

#include "Student.h"


void GetNumbers(int[], char *);

Student::Student()
{
}


Student::~Student()
{
}

void Student::GetName(const char * x)
{
	LastName = x;
}


void Student::GetGrade(char * x)
{
	GetNumbers(Grade, x);

	Average = Grade[0] + Grade[1] + Grade[2] + Grade[3] + Grade[4];
	Average = Average / 5;

}

void GetNumbers(int G[], char * x)
{
	int y;
	char * pNumber;
	char Separators[] = ",";

	y = 0;
	pNumber = strtok(x, Separators);
	while (pNumber != NULL)
	{
		G[y++] = atoi(pNumber);
		pNumber = strtok(NULL, Separators);
	}
}

void Student::Display()
{
	cout << "Last Name: " << LastName << endl;

	cout << "Grades: " << Grade[0] << ", " << Grade[1] << "," << Grade[2] << ", " << Grade[3] << ", " << Grade[4] << endl;

	cout << "Average: " << Average << endl;
}


int Student::Compare(const Student & x) const
{
	int Result;

	if ((Result = LastName.Compare(x.LastName)) == 0)
		return Result;
}

Student & Student::Copy(const Student & x)
{
	return operator = (x);
}

int ReadFile(Student x[])
{
	fstream MyFile;
	char Line[81];
	int a = 0;
	int i = 0;

	MyFile.open("TestFile.txt", ios_base::in);
	while (!MyFile.is_open())
	{
		MyFile.clear();
		MyFile.open("TestFile.txt", ios_base::in);
	}


	do {
		MyFile.getline(Line, 81);
		if (a % 2 == 0)
		{
			x[i].GetName(Line);
		}
		else
		{
			x[i].GetGrade(Line);
			i++;
		}
		a++;
	} while (strcmp(Line, "EOF") != 0);
	MyFile.close();

	return i;
}



void Sort(Student S[], int i)
{
	int		x;
	bool	IsSorted;
	Student	Temp;

	do {
		IsSorted = true;
		for (x = 0; x + 1 < i; x++)
		{
			if (S[x].Compare(x[S + 1]) < 0)
				cout;
			else
			{
				Temp.Copy(S[x]);
				S[x].Copy(S[x + 1]);
				S[x + 1].Copy(Temp);

				IsSorted = false;
			}
		}

	} while (!IsSorted);
	cout << "Finish Sorting" << endl;
}

