#include <iostream>
using namespace std;

int main()

{
	float math , sci , am , as ;
	cout << " Please enter your math marks out of 100. \n ";
	cin >> math ;
	cout << " Please enter your science marks out of 100. \n ";
	cin >> sci ;
	cout << "Enter your attendance of math class out of 50. \n " ;
	cin >> am ;
	cout << "Enter your attendance of Science class out of 50. \n";
	cin >> as ;
	if ( am + as > 75)
	{
		cout << "Your marks for Math are " << math << " . \n";
		cout << "Your marks for Science are " << sci << " . \n";
	}
	else if ( am + as <= 75)
	{
		cout << "Your marks for math are " << math * am  /50 << " . \n";
		cout << "Your marks for science are " << sci * as / 50 << " . \n";
	}
	else 
		cout << "Error." ;
	
	return 0;
}
	