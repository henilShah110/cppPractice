#include <iostream>
using namespace std ;

int main ()
{
	int n , k;
	cin >> n >> k;
	int p[n] , l[n];
	// p > participated ,, l > left
	float eligible = 0;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> p[i];
		l[i] = 5 - p[i];
		if(l[i] >= k)
			eligible++;
	}
	
	//cout << eligible << endl;
	
	eligible /= 3;
	//cout << eligible << endl;
	
	// below copied form tests/gif.cpp
	int ans;
	for (int i=0; i <= eligible ; i++)
		ans = i;
	
	cout << ans ;

	
	return 0;
}