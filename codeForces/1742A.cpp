#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int a,b,c;
	
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a >> b >> c;
		if(a >= c && a >= b && a == c + b)
			cout << "yEs" << endl;
		else if(c >= b && c >= a && c == a + b)
			cout << "yEs" << endl;
		else if(b >= c && b >= a && b == c + a)
			cout << "yEs" << endl;
		else cout << "NO" << endl;
	}
		
	return 0;
}