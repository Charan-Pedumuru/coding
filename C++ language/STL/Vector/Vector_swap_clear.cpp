#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3, 69);
    vector<int> v1(3, 45);

    for (auto t : v)
        cout << t << "\t";
    cout << endl;

    for (auto t : v1)
        cout << t << "\t";
    cout << endl;

    swap(v1, v); // swaps the elements in the vectors
    cout << "After swapping: " << endl;
    for (auto t : v)
        cout << t << "\t";
    cout << endl;

    for (auto t : v1)
        cout << t << "\t";
    cout << endl;

    cout << "The size of vector v before clearing: " << v.size() << endl;
    cout << v.empty() << endl;
    v.clear(); // erases the entire vector
    cout << "The size of vector v after clearing: " << v.size() << endl;
    cout << v.empty() << endl;
}