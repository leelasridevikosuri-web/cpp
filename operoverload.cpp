#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
	public:
	    student(string name)
	{
		this->name=name;
	}
	student operator+(const student &s)
	{
		return student(this->name+s.name);
	}
	void display()
	{
		cout<<"full name:"<<this->name<<endl;
	}
};
int main(){
	student s1("maha");
	student s2("lakshmi");
	student s3=s1+s2;
	s3.display();
	return 0;
}

