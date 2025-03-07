#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[7];
        for (int i = 0; i < 6; i++) {
            cin>>arr[i+1];
        }
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == 'N') {
                int t = arr[1];
                arr[1] = arr[2];
                arr[2] = arr[6];
                arr[6] = arr[5];
                arr[5] = t;
            }
            else if(s[i] == 'S') {
                int t = arr[1];
                arr[1] = arr[5];
                arr[5] = arr[6];
                arr[6] = arr[2];
                arr[2] = t;
            }
            else if(s[i] == 'E') {
                int t = arr[1];
                arr[1] = arr[4];
                arr[4] = arr[6];
                arr[6] = arr[3];
                arr[3] = t;
            }
            else {
                int t = arr[1];
                arr[1] = arr[3];
                arr[3] = arr[6];
                arr[6] = arr[4];
                arr[4] = t;
            }
        }
        cout << arr[1] << "\n";
    }
}