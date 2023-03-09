//************************************************************************** 
//
// Programming Excerise 6   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017  
//
//************************************************************************** 

#include <iostream> 
#include "WCS_String.h"
#include "Student.h"

using namespace std;

void main()
{
	Student Class[25];
	Student P1;

	fstream MyFile;
	char Line[81];
	int i = 0;
	int a = 0;

	i = ReadFile(Class);

	cout << "Number of Students: " << i << endl;

	for (a = 0; a < i; a++)
		Class[a].Display();

	cout << endl;

	Sort(Class, i);

	for (a = 0; a < i; a++)
		Class[a].Display();


}



