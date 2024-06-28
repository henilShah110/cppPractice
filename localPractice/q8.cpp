#include <iostream>
using namespace std;

int main ()
{
	
	float a , b , c ;
	char d;
	cout << "Enter the number of classes held. \n";
	cin >> a;
	cout << "Enter the number of classes attended. \n";
	cin >> b;
	c=0.75*a;
	cout << "Do you have a Medical Cause? Answer with 'Y' or 'N'. \n";
	cin >> d;
	if (d=='Y')
		cout << "You are allowed to sit in the exam";
	else if (d =='N')
		if (b == c)
		cout << "You are allowed to sit in the exam.";
		else if (b > c)
		cout << "You are allowed to sit in the exam.";
		else if (b < c)
		cout << "You are not allowed to sit in the exam.";
		else 
		cout << "Error";
	else 
		cout << "Error";
	
	
	
	
	return 0;
}