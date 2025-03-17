#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    
    for (int val : dq) {
        cout << val << " ";
    }
    return 0;
}
