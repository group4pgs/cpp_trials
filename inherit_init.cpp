#include <iostream>
using namespace std;

class parent
{
	int id;
	
	public:
	parent()
	{
		id = 0;
	}
	void get_id()
	{
		cout << "ID of Parent = " << id << endl;
	}
	void set_id(int i)
	{
		id = i;
	}
};


class child : public parent
{
	int id_child;
	
	public:
	child()
	{
		id_child = 0;
	}
	void get_idc()
	{
		cout << "ID of Child = " << id_child << endl;
	}
	void set_idc(int i)
	{
		id_child = i;
	}
};

int main()
{
	child child1;
	child1.get_idc();
	child1.set_idc(69);
	child1.get_idc();
	cout <<"\n\n";

	parent p1;
	p1.get_id();
	p1.set_id(45);
	p1.get_id();

	child1.set_id(39);
	child1.get_id();
	return 0;
}
