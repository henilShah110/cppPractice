#include <iostream>
using namespace std ;

int main ()
{
	int n,m,a,b,suma,sumb;
	cin >> n >> m >> a >> b ;
	for (int i = 0; i*m <= n ; i++)
		sumb = i * b;
	
	n %= m;
	if (m < (a*n)) 
		suma = b;
	else
		suma = a * n;
	 
	//cout << suma << endl << sumb << endl;
	
	cout << suma + sumb;
	

	return 0;
}