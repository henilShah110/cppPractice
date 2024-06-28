#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	float c ;
	int b;
	cout << "What is your name? \n";
	cin >> a;
	cout << "What is your age? \n";
	cin >> b;
	cout <<	"what is your marks out of 60? \n";
	cin >> c;
	cout << "Your name is " << a << ", born in " << 2021 - b << " and you have scored " << c*100/60 << "%";
	return 0;
}
	