#include <iostream>
using namespace std;

int multiply(int m, int n)
{
	if(m==1){
		return 1,n;
	}
	else{
		return 1,n+multiply(m-1,n);
	}
}

int main()
{
	int a,b;

	cout<<"Enter A => ";
	cin>>a;
	cout<<"Enter B => ";
	cin>>b;

	cout<<a<<" x "<<b<<" = "<<multiply(a,b)<<endl;
}
