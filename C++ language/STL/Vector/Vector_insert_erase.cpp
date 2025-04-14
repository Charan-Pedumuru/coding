#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(23);
    vec.push_back(19);
    vec.push_back(27);

    vec.insert(vec.begin(), 300);

    for (vector<int>::iterator t = vec.begin(); t != vec.end(); t++)
        cout << *(t) << "\t";
    cout << endl;

    vec.insert(vec.begin() + 1, 2, 45); // Inserts 45 value at the indeces 1 and 2 of vector vec

    for (auto u : vec)
        cout << u << "\t";
    cout << endl;

    vector<int> temp(4, 42);
    vec.insert(vec.begin(), temp.begin(), temp.end()); // Inserts vector temp infront of vector vec

    for (auto u : vec)
        cout << u << "\t";
    cout << endl;

    cout << vec.size() << endl;
    vec.erase(vec.begin() + 1); // Erases element at 0 index
    vec.erase(vec.end() - 1);   // Erases element at last index
    cout << vec.size() << endl; // Shows the number of elements in a vector

    vec.pop_back(); // Deletes the last element
    cout << "The elemnts after pop operation: ";
    for (auto u : vec)
        cout << u << "\t";
    cout << endl;
}