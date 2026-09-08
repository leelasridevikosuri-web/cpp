#include<iostream>
#include<string>

class student
{
  int sid;   
  string sname;
public:
	 void display()
	{
		std::cout<<"sid is"<<sid<<endl;
		std::cout<<"sname is"<<sname<<endl;
	}
};
int main()
{
	student *t = new student();
	t -> display();
	student *t1 = new student();
	t1 -> display();
}
