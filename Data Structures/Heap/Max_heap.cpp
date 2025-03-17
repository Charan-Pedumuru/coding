#include <iostream>
#include <vector>
#include <algorithm> // For make_heap, push_heap, pop_heap

using namespace std;

int main()
{
    vector<int> heap = {10, 20, 15, 30, 40, 50};

    // Convert vector into a max heap
    make_heap(heap.begin(), heap.end());

    cout << "Max Heap: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    // Insert new element
    heap.push_back(60);
    push_heap(heap.begin(), heap.end());

    cout << "After inserting 60: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    // Remove maximum element (root)
    pop_heap(heap.begin(), heap.end());
    heap.pop_back();

    cout << "After deleting max: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    return 0;
}
