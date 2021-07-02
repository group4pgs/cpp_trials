#include <iostream>
using namespace std;
int main(){


	int n = 65;
	float f = 3.142;
	
	int *ptr_n = &n;
	float *ptr_f = &f;
	


	for(int i=65;i<26+65;i++)
	{
		*ptr_n=i;
		cout<<(char)*ptr_n<<"\t";
	}


	cout<<endl;
	return 0;
}
