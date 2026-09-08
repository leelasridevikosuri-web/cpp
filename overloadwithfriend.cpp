#include<iostream>
using namespace std;
class distance
{
	private:
		int km;
		int meters;
	public:
		distance()
		{
			this->km=0;
			this->meters=0;
		}
		distance(int km,int meters)
		{
			this->km=km;
			this->meters=meters;
		}
	void display()
	{
		cout<<km<<"km"<<meters<<"meters"<<endl;
	}
	friend distance operator+(distance d1,distance d2);
};
  distance operator + (distance d1,distance d2)
    {
    	distance temp;
    	temp.meters=d1.meters+d2.meters;
    	temp.km=d1.km+d2.km;
    	if(temp.meters>1000)
    	{
    		temp.km+=temp.meters/1000;
    		temp.meters=temp.meters/1000;
		}
		return temp;
	}
int main()
{
	distance morningwalk(3,800);
	distance eveningwalk(4,900);
	total distance d3 = morningwalk+eveningwalk;
	d3.display();
}

