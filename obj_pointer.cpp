#include <iostream>
using namespace std;

class demo
{
	private:
		int demo_x;
	public:
		demo(){
			demo_x = 0;}
		
		virtual void show()		//Not making it virtual, always refers to this function, whenever, sub classes are called using pointers
		{
			cout<<"Value of x -> "<<demo_x<<endl;
		}
};

class demo_derived : public demo
{
	int d_x;
	public:
		demo_derived(){
			d_x =10;}
		void show()
		{
			cout<<"Derived x -> "<<d_x<<endl;
		}
};


int main()
{
	
	demo *demo_ptr;
	demo_derived obj;
	demo_ptr = &obj;
	demo_ptr->show();


	return 0;
}
