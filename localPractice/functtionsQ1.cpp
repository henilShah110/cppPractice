	//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
	//Marks        Grade
	//91-100         AA
	//81-90          AB
	//71-80          BB
	//61-70          BC
	//51-60          CD
	//41-50          DD
	//<=40          Fail
	
	
#include <iostream>
using namespace std ;

void grade (int marks)
{
	cout << marks << "-";
	if (marks>=91)
		cout << "AA";
	else if (marks>=81)
		cout << "AB";
	else if (marks>=71)
		cout << "BB";
	else if (marks>=61)
		cout << "BC";
	else if (marks>=51)
		cout << "CD";
	else if (marks>=41)
		cout << "DD";
	else
		cout << "fail";
	cout << endl;
}
	
int main ()
{
	grade(93);
	grade(45);
	grade(81);
	grade(67);
	
	
	return 0;
}