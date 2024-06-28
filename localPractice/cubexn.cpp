#include <iostream>
using namespace std ;

double cube(double num)
{
	return num * num * num;
}
int main ()
{
	int n;
	cin>>n;
	cout << cube(n);
	return 0;
}