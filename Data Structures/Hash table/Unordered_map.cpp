#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    umap["apple"] = 10;
    umap["banana"] = 20;
    
    for (auto &pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}