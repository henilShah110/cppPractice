#include <iostream>
using namespace std;

int main()
{
	int a , b;
	a = 3;
	b = 0;
	while ( b < 100)
	{
		cout << a << " ";
		a += 6;
		b++;
	}
	return 0;
}