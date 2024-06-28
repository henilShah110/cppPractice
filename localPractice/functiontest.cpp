#include <iostream>
using namespace std ;

int Multiply(int a, int b)
{
	return a*b;
}

int main ()
{
	int num1 = 2 , num2 = 3;
	int result = Multiply(num1 , num2);
	
	cout << result << endl;
	
	//but if we have to do this and see result multiple times we
	//can do what is done in functiontest2
	
	return 0;
}