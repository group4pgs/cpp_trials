#include <iostream>
using namespace std;

class group
{

	int id;
	char ch;
	float progress;
	
public:
	float static task_finish;
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
		if(progress>task_finish)
		{
			task_finish = progress;
		}
	}
	float get_task_report()
	{
		return task_finish;
	}
	
};

float group :: task_finish;

int main()
{
	group g1;
	group g2;
	
	g1.assign_new(101,'a',0.00);
	g2.assign_new(102,'b',0.00);
	
	g1.print_progress();
	g2.print_progress();
	
	float x;
	cout<<"\nUpdating progress"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter progress of G1 =>";
		cin>>x;
		g1.update_progress(x);
		cout<<"Enter progress of G2 =>";
		cin>>x;
		g2.update_progress(x);
		
		g1.print_progress();
		g2.print_progress();
		
		if(g1.get_task_report()>=100)
		{
			cout<<"\n\nDone with task"<<endl;
			break;
		}
		cout<<endl;
	
	}	
	return 0;
	}
