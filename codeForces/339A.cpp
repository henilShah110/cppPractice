#include <iostream>
#include <string>
using namespace std ;

int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int n1 , n2 , n3 , i ;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	for ( i = 0; i < len ; i++)
	{
		if(s[i] == '1')
			n1++;
		 if(s[i] == '2')
			n2++;
		if(s[i] == '3')
			n3++;
	}
	if ( n1 != 0)
	{
		for ( i = 0; i < (n1-1) ; i++)
			cout << "1+";
		if ( n2 == 0 && n3 == 0)
			cout << "1";
		else
			cout << "1+";
	}
	if ( n2 != 0)
	{
		for ( i = 0; i < (n2-1) ; i++)
			cout << "2+";
		if ( n3 == 0)
			cout << "2";
		else 
			cout << "2+";
	}
	if ( n3 != 0)
	{
		for ( i = 0; i < (n3-1) ; i++)
			cout << "3+";
		cout << "3";
	}		
	return 0;
}