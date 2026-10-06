#include<iostream>
using namespace std;
class demo{
	public:
		demo(){
			cout<<"constructor called"<<endl;
		}
		~demo(){
			cout<<"destructor called"<<endl;
		}
};
int main(){
	cout<<"start of main"<<endl;
	{
		demo d;
		cout<<"inside inner block"<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}
