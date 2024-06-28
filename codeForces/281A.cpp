#include <iostream>
#include <string>
using namespace std ;

int main ()
{
	string a;
	cin>>a;
	if('a'<=a[0] && a[0]<='z')
		a[0]=char (a[0]-32);
	cout<<a;
	return 0;
}