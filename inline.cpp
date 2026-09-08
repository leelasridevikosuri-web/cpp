#include<iostream>
class calculator
{
	public:
	  inline int cube(int num)
		{   return num*num*num;		
		}
};
int main()
{
	calculator* cal = new calculator();
	int number;
	std::cout<<"enter a number"<<std::endl;
	std::cin>>number;
	//calling the inline function
	std::cout << "The cube of the number is: " << cal->cube(number) <<std::endl;

}
