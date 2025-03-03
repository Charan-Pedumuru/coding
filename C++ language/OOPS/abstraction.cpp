#include<bits/stdc++.h>
using namespace std;

class abstract{
private:
	float radius;
public:
	float area(int r){
		radius=r;
		float a = 3.14*radius*radius;
		return a;
	}
}obj;


class Vehicle
{
  private:
          void piston()
        {
            cout<<"4 piston\n";
        }

        void manWhoMade()
        {
            cout<<"Markus Librette\n";
        }
    public:
        void company()
        {
            cout<<"GFG\n";
        }
        void model()
        {
            cout<<"SIMPLE\n";
        }
        void color()
        {
            cout<<"Red/GREEN/Silver\n";
        }
        void cost()
        {
            cout<<"Rs. 60000 to 900000\n";
        }
        void oil()
        {
            cout<<"PETROL\n";
        }
} veh;

int main()
{
	cout<<obj.area(4.6)<<endl;
	veh.company();
	veh.model();
	veh.color();
	veh.cost();
	veh.oil();

}
