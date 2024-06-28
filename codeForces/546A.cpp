#include <iostream>
using namespace std ;

int main ()
{
	int n , w , k , o;
	o = 0;
	cin >> k >> n >> w;
	for (int  i = 1 ; i <= w ; i++)
		o = (o + (i*k));
	int ans = (o-n);
	if ( ans < 0)
		ans = 0;
	cout << ans;
		
	return 0;
}