#include<bits/stdc++.h>
using namespace std;

class test{
	int a,b;
public:
	int solve(int in)
	{
		a=in;
		b=a/2;
		return b;
	}
	
};

int main()
{
	int n;
	cin>>n;

	test half;
	int ans=half.solve(n);
	cout<<ans<<endl;

}
