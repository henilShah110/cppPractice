#include <iostream>
using namespace std ;

int main ()
{
	//no. of slices = c * d = max no. of drinks
	//max no. by drinks = l * k / nl
	//max no. by salt = p / np
	
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	float a[3];
	a[0] = c * d;
	a[1] = (l*k) / nl;
	a[2] = p / np;
	
	// the below shows which is minimum 
	
	float cons = 1000;
	
	for ( int j = 0; j < 3 ; j++)
		if (a[j] < cons)
			cons = a[j];
		
	cons /= n;
	
	// the below is for greatest integer
	
	int ans;
	for (int i=0; i <= cons ; i++)
		ans = i;
	
	cout << ans;
		
	
	return 0;
}