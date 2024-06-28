#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
	long long n , m , a ;
	cin >> n;
	cin >> m;
	cin >> a;
	n = (n+a-1)/a;
	m = (m+a-1)/a;
	
	cout << (n*m)/(a*a) ;
	return 0;
}