#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout << "Enter the age of person 1. \n";
	cin >> a;
	cout << "Enter the age of person 2. \n";
	cin >> b;
	cout << "Enter the age of person 3. \n";
	cin >> c;
	if (a>b)
		if (a>c)
			cout << "Person 1 (age " << a <<") is the oldest.";
				if (b>c)
					cout << "Person 3 (age " << c <<") is the youngest." ;
				else if (c>b)
					cout << "Person 2 (age " << b <<") is the youngest." ;
				else
					cout << "Both second and third person have the same age.";
		 else if (c>a)
			cout << "Person 3 (age " << c <<") is the oldest. \n";
			cout << "Person 2 (age " << b <<") is the youngest." ;
		else
			cout << "Both the first and the third person have the same age.";
	else if (b>a)
		if (b>c)
			cout << "Person 2 (age " << b <<") is the oldest.";
				if (c>a)
					cout <<"Person 1 (age " << a <<") is the youngest." ;
				else if (a>c)
					cout << "Person 3 (age " << c <<") is the youngest." ;
				else 
					cout << "Both the first and the third person have the same age.";
		 else if (c>b)
			cout << "Person 3 (age " << c <<") is the oldest.";
		