#include<iostream>
#include<conio.h>
class calculator
{
	public:
		void add( inta, intb )
		{
			cout<<"addition expecting 2 values:"<<(a+b)<<endl;
		}
		void add(double d,int a,intb)
		{
			cout<<"addition excepting 3 values:"<<(d+a+b)<<endl;
		}
};
void main()
{
	clrscr();
	calculator calc;
	calc.add(2,3);
	calc.add(37.5,6,9);
	getch();
}
