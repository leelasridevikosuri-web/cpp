#include<iostream>
using namespace std;
class A{
	public:
		void showA(){
			cout<<"class A"<<endl;
		}	
};
class B:public A{
	public:
		void showB(){
			cout<<"class B"<<endl;
		}
};
class C:public B{
	public:
		void showC(){
			cout<<"class C"<<endl;
		}
};
int main(){
	cout<<"multilevel inheritance"<<endl;
	C obj;
	obj.showA();
	obj.showB();
	obj.showC();
	return 0;
}
