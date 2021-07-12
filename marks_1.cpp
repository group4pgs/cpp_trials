#include <iostream>
using namespace std;

class student
{
	int id;
	float sub1, sub2, sub3, avg;
	char grade;
	
	
public:
	student()
	{
		id=0;
		sub1=0.0;
		sub2=0.0;
		sub3=0.0;
		avg=0.0;
		grade='u';
	}
	
	void calculate_avg()
	{
		avg = (sub1+sub2+sub3)/3;
	}
	void calculate_grade()
	{
		if(avg>=70)
		{
			grade = 'a';
		}
		else if(avg<70 && avg>=40)
		{
			grade = 'b';
		}
		else
		{
			grade = 'f';
		}
	}
	void init(int i,float s1,float s2,float s3)
	{
		id = i;
		sub1 = s1;
		sub2 = s2;
		sub3 = s3;
		calculate_avg();
		calculate_grade();
	}
	void update_marks(float s1,float s2,float s3)
	{
		sub1 = s1;
		sub2 = s2;
		sub3 = s3;
		calculate_avg();
		calculate_grade();
	}
	void display_marks()
	{
		cout << "ID\t" << id << endl;
		cout << "Marks1\t" << sub1 << endl;
		cout << "Marks2\t" << sub2 << endl;
		cout << "Marks3\t" << sub3 << endl;
		cout << "Grade\t" << grade << "\n\n" << endl;
	}
	//friend updating_marks_(void);
};

/*
student :: updating_marks_(student stud)
{
	stud.update_marks(0,0,40);
	return stud;
}*/

int main()
{
	student stu1 = student();
	stu1.init(101,90,80,70);
	stu1.display_marks();
	stu1.update_marks(40,30,79);
	stu1.display_marks();
	
	//stu1 = updating_marks_(stu1);
	//stu1.display_marks();
	
	return 0;
}
