#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(200); // Adds a new value dynamically allocating it
    v.push_back(24);
    v.push_back(64);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 4);

    vector<int> c(5, 100); // Container with 5 instances of 100 {100,100,100,100,100}

    vector<int>s(5); // 5 instances of 0 {0,0,0,0,0}

    vector<int>v1(3, 45);  // 3 instances of 45 {45,45,45}
    vector<int> v2(v1); // Copy of v1

    vector<int>::iterator it=v.begin(); //This points to first address of container
    cout<<*(it)<<"\t"; it++;
    cout<<*(it)<<endl;

    cout<<v1[1]<<" "<<c[0]<<" "<<s.at(4)<<endl;
    cout<<v.front()<<" "<<v.back()<<endl; //This is the first and last elements not addresses

    vector<int>::iterator i=s.end(); // Points to the address present after the last value in a container
    vector<int>::reverse_iterator rit = c.rbegin();
    vector<int>::reverse_iterator rit_end = c.rend();
    cout<<*(rit++)<<endl;
    cout<<*(--rit_end)<<endl;

    //Declaring reverse operator using normal operator
    vector<int>::iterator t=s.rend().base();
    vector<int>::iterator cs=s.rbegin().base();


}