//************************************************************************** 
//
// Programming Excerise 6   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017 
//
//************************************************************************** 
#ifndef STUDENT_H
#define STUDENT_H

#include "WCS_String.h"
#include <fstream>
#include <stdlib.h>
#include <string.h> 

using namespace std;

class Student
{
public:
	Student();
	~Student();

	void		GetName(const char *);
	void		GetGrade(char *);
	void		Display();
	int			Compare(const Student &) const;
	Student &	Copy(const Student &);
private:
	WCS_String LastName;
	int Grade[5];
	double Average;

};

int ReadFile(Student[]);

void Sort(Student[], int);


#endif
