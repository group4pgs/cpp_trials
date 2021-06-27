#include <iostream>
using namespace std;

int main()
{
	int i,n,factorial=1;
	cout<<"Enter a number => ";
	cin>>n;

	for(i=2;i<=n;i++)
	{
		factorial=factorial*i;
	}

	cout << "Factorial of " << n << " => " << factorial << endl;
	return 0;
}
