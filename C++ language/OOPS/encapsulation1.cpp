#include<bits/stdc++.h>
using namespace std;

class test
{
private:
	int marks;
	string grade;
public:
	void setmarks(int marks){
		this->marks=marks;
	}
	int getmarks(){
		return marks;
	}
	void setgrade(string grade){
		this->grade=grade;
	}
	string getgrade(){
		return grade;
	}
} test;

int main()
{
	test.setmarks(96);
	test.setgrade("A+");

	cout<<"Marks: "<<test.getmarks()<<endl;
	cout<<"Grade: "<<test.getgrade()<<endl;
}
