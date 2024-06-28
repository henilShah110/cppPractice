#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	a = "YES";
	
	
	while ( a == "YES")
	{
		cout << "Do you want to answer? \n";
		cin >> a ;
	}
	return 0;
}