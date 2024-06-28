#include <iostream>
using namespace std ;

int Multiply(int a, int b)
{
	return a*b;
}

void Multiplyandresult (int a, int b)
{
	int result = Multiply(a,b);
	cout << result << endl;
}

int main ()
{
	Multiplyandresult(3,2);
	Multiplyandresult(4,7);
	Multiplyandresult(9,6);
	
	return 0;
}