#include <iostream>
using namespace std;

int main()
{
	float tc;
	cout << "Enter temperature in celcius => ";
	cin >> tc;

	float tf = (tc*9/5)+32;
	cout << "Temperature in faranheit is => " << tf << endl;
	return 0;

}
