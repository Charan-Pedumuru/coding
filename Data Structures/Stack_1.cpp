#include<bits/stdc++.h>
using namespace std;

stack<pair<int, int>>st;

int main()
{
    int n,new_min, new_elem;
    
    cin>>new_elem;
    new_min=st.empty() ? new_elem:min(new_elem, st.top().second); // Adding an element
    st.push({new_elem,new_min});


    int minimum=st.top().second; // Finding the minimum
    cout<<minimum<<endl;
    int removed_element= st.top().first;  // Removing an element
    cout<<removed_element<<endl;
    st.pop();
}