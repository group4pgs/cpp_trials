#include <iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int *ptr = &a[0];
	int temp = *ptr;

	while(ptr<=&a[8])
	{
		*ptr = *(ptr+1);
		ptr++;
	}
	*ptr = temp;
	for(int j=0;j<10;j++)
		cout<<a[j]<<"\t";
	cout<<endl;
	return 0;
}
