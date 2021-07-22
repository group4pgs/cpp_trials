#include <iostream>
using namespace std;

class parent1
{
	int id;
	protected:
	int protect_id;




	public:
	parent1()
	{
		protect_id = 1;
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


class child : protected parent1
{
	int id_child;

	public:
	child()
	{
		id_child = 1;
	}
	void get_idc()
	{
		cout << "ID of Child = " << id_child << endl;
		cout << "Protected ID from Parent => "<<protect_id<<endl;
	}
	void set_idc(int i)
	{
		id_child = i;
	}
};

class grandchild : public child
{
	int id_gchild;

	public:
	grandchild()
	{
		id_gchild = 2;
	}
	void get_idgc()
	{
		cout << "ID of Grand Child = " << id_gchild << endl;
		cout << "Protected ID from Parent => "<<protect_id<<endl;
	}
	void set_idgc(int i)
	{
		id_gchild = i;
	}
};
int main()
{
	parent1 p1;
	p1.get_id();
	p1.set_id(45);
	p1.get_id();
	
	
	child child1;
	child1.get_idc();
	child1.set_idc(69);
	child1.get_idc();
	cout <<"\n\n";

	grandchild gc1;
	gc1.set_idgc(420);
	gc1.get_idgc();
	gc1.get_idc();
	gc1.get_id();


	return 0;
}
