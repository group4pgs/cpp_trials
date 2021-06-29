#include <iostream>
using namespace std;

void display_data(void)
{
	cout<<"Nothing to show!"<<endl;
}

void display_data(int a)
{
	cout<<"Integer data -> "<<a<<endl;
}

void display_data(float a)
{
	cout<<"Float data -> "<<a<<endl;
}

int main()
{
	int num = 2;
	float num2 = 3.142;
	cout<<"When nothing is passed while calling:"<<endl;
	display_data();
	cout<<"\n\nWhen int is passed while calling:"<<endl;
	display_data(num);
	cout<<"\n\nWhen float is passed while calling: "<<endl;
	display_data(num2);

	return 0;
}
