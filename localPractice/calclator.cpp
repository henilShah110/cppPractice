#include <iostream>
using namespace std ;

double addition(double n1,double n2)
{
	cout<<"Your answer is ";
	return n1+n2;
}
double subtraction(double n1,double n2)
{
	cout<<"Your answer is ";
	return n1-n2;
}
double multiplication(double n1,double n2)
{
	cout<<"Your answer is ";
	return n1*n2;
}
double division(double n1,double n2)
{
	cout<<"Your answer is ";
	return n1/n2;
}

int main ()
{
	cout<<"Choose one of the four options\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	int n;
	cin>>n;
	int num1,num2;
	cout<<"Choose your two number\n";
	cin>>num1>>num2;
	if(n==1)
		cout << addition(num1,num2);
	else if(n==2)
		cout << subtraction(num1,num2);
	else if(n==3)
		cout << multiplication(num1,num2);
	else if(n==4)
		cout << division(num1,num2);
	else
		cout << "Error";
	return 0;
}