#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
  cin>>arr[i];

  // Create an unordered_map to store the frequencies of the elements
  map<int, int> freq;

  // Iterate over the array and update the frequencies
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  // Iterate over the map and print the frequencies
  for (auto it = freq.begin(); it != freq.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}