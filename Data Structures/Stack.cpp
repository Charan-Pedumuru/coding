#include<bits/stdc++.h>
using namespace std;

stack<pair<int, int>>st;

int main()
{
    int new_elem=2;
    int new_min=st.empty() ? new_elem:min(new_elem, st.top().second);
    st.push({new_elem,new_min});

    cout<<new_min<<endl;
}