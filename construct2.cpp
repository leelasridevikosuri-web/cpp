#include<iostream>
#include<string>
class student
{   public:
	int sid;
	std::string sname;
	student(int sid, std::string sname)
	{
	       this->sid=sid;
	       this->sname=sname; //this keyword is used to represent member variables
	}
	void display()
	{
		std::cout<<"SID is :"<<sid<<std::endl;
		std::cout<<"SNAME is :"<<sname<<std::endl;
	}
};
int main()
{
	student* s1 = new student(101,"ajay");
	s1->display();
	
	student* s2 = new student(102,"vinay");
	s2->display();
	delete s1;
	delete s2;
}

