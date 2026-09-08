#include<iostream>
#include<string>
class student
{
	private:
		std::string name;
		     int rollnumber;
	public:
		void setData(std::string n,int r)
		{
			name = n;
			rollnumber = r;
		}
		void displayData()
		{
			std::cout<<"rollnumber:"<<rollnumber<<"name:"<<name<<std::endl;
		}
};
int main()
{
	student list[3];
	list[0].setData("mahi",276);
	list[1].setData("vahi",269);
	list[2].setData("harisri",606);
	for(int i=0;i<3;i++)
	{
		list[i].displayData();
	}
}
