#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	string s;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> s;
		if ( s == "YES")
			cout << "YES" << endl;
		else if ( s == "YEs")
			cout << "YES"<< endl;
		else if ( s == "Yes")
			cout << "YES"<< endl;
		else if ( s == "YeS")
			cout << "YES"<< endl;
		else if ( s == "yes")
			cout << "YES"<< endl;
		else if ( s == "yEs")
			cout << "YES"<< endl;
		else if ( s == "yeS")
			cout << "YES"<< endl;
		else if ( s == "yES")
			cout << "YES"<< endl;
		else
			cout << "NO"<< endl;
	}
	return 0;
}