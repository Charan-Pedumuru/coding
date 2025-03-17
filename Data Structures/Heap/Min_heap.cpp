#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> heap = {50, 30, 40, 10, 20, 15};

    // Convert vector into a min heap
    make_heap(heap.begin(), heap.end(), greater<int>());

    cout << "Min Heap: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    // Insert new element
    heap.push_back(5);
    push_heap(heap.begin(), heap.end(), greater<int>());

    cout << "After inserting 5: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    // Remove minimum element (root)
    pop_heap(heap.begin(), heap.end(), greater<int>());
    heap.pop_back();

    cout << "After deleting min: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    return 0;
}
