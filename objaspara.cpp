#include<iostream>
#include<string>
class student
{
	public:
		std::string name;
		     int rollnumber;
};
void printstudent(student* s)
{
	std::cout<<"name:"<<s->name<<std::endl;
	std::cout<<"rollnumber:"<<s->rollnumber<<std::endl;
}
int main()
{
	student* st = new student();
	st->name = "mahi";
	st->rollnumber = 276;
	printstudent(st);
}
