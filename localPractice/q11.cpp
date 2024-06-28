#include <iostream>
using namespace std;

int main ()
{
	
	char k ;
	cout << "Enter the Letter. \n";
	cin >> k;
	if ( 'z' >= k && k >= 'a') 
		cout << "The entered letter is lowercase.";
	else if ( 'Z' >= k && k >= 'A')
		cout << "The entered letter is UPPERCASE.";
	else
		cout << "Read Dumdass, 'ENTER A LETTER";
	return 0;
}