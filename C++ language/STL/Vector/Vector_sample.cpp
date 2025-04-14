#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(42);
    v.push_back(35);
    v.push_back(12);

    for (vector<int>::iterator u = v.begin(); u != v.end(); u++)
        cout << *(u) << "\t";
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << "\t";
    cout << endl;

    for (auto it : v)
        cout << it << "\t";
    cout << endl;

    cout << v.front() << " " << v.back() << endl;
}