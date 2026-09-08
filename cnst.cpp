#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
	string name; //member variables
	string ID;
	// create the student
	student(string name,string ID) //local variables
	{
		this->name = name;
		this->ID = ID;
	}
	student(const student&s)
	{
		name=s.name;
		ID=s.ID;
	}
	void display()
	{
		cout<<"name is"<<name<<"ID is"<<ID<<endl;
	}
};
	int main()
	{
		student s1("mahi","276");
		student s2=s1;
		student s3=s1;
		student s4=s1;
		s1.display();
		s2.display();
		s3.display();
		s4.display();
		
		return 0;
}
