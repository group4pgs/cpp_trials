#include <iostream>
using namespace std;

float addition(float *a, float *b){
	return *a+*b;}

float subtract(float *a,float *b){
	return *a-*b;}

float multiply(float *a, float *b){
	return *a*(*b);}

int main()
{
	float a,b;
	cout<<"Enter A => ";
	cin>>a;
	cout<<"Enter B => ";
	cin>>b;

	cout<<"A + B = "<<addition(&a,&b)<<endl;
	cout<<"A - B = "<<subtract(&a,&b)<<endl;
	cout<<"A x B = "<<multiply(&a,&b)<<endl;
	return 0;
}
