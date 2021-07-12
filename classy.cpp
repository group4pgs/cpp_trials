#include <iostream>
using namespace std;

class group
{

	int id;
	char ch;
	float progress;
public:
	void assign_new(int i, char c, float p)
	{
		id = i;
		ch = c;
		progress = p;
	}
	
	void print_progress()
	{
		cout<<"Progress of "<<id<<" is => "<<progress<<endl;
	}
	
	void update_progress(float p)
	{
		progress = p;
	}
};

int main()
{
	group g1;
	group g2;
	
	g1.assign_new(101,'a',45.35);
	g2.assign_new(102,'b',69.96);
	
	g1.print_progress();
	g2.print_progress();
	
	cout<<"\nUpdating G1 progress"<<endl;
	g1.update_progress(95.63);
	g1.print_progress();
	g2.print_progress();
	
	return 0;
}
