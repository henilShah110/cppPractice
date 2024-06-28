//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
	//Marks        Grade
	//91-100         AA
	//81-90          AB
	//71-80          BB
	//61-70          BC
	//51-60          CD
	//41-50          DD
	//<=40          Fail

THE IDEA WAS A FAIL BECAUSE CASE CANNOT HAVE GREAER THAN SIGNS LOL

#include <iostream>
using namespace std ;

void grade(int marks)
{
	cout << marks << "-";
	switch(marks)
	{
		case >= 91 : cout << "AA";
			break;
		case >= 81 : cout << "AB";
			break;
		case >= 71 : cout << "BB";
			break;
		case >= 61 : cout << "BC";
			break;
		case >= 51 : cout << "CD";
			break;
		case >= 41 : cout << "DD";
			break;
		case < 41 : cout << "Fail";
			break;
	}
}
		
int main ()
{
	grade(45);
	grade(91);
	return 0;
}