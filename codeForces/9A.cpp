#include <iostream>
using namespace std ;

int main ()
{
	int a,b;
	cin >> a >> b;
	int num;
	if(a >= b)
		num = 7 - a;
	else
		num = 7 - b;
	int den = 6;
	for(int i = 2 ; i<7;i++)
	{
		if(num % i == 0 && den % i ==0)
		{
			num/=i;
			den/=i;
		}
	}
	cout << num << "/" << den;
	return 0;
}