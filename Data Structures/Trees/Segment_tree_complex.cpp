#include <iostream>
#include <vector>
using namespace std;

class SegmentTree
{
private:
    vector<int> tree;
    int n;

    void buildTree(vector<int> &arr, int node, int start, int end)
    {
        if (start == end)
        {
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end) / 2;
            buildTree(arr, 2 * node + 1, start, mid);
            buildTree(arr, 2 * node + 2, mid + 1, end);
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
    }

    void updateTree(int node, int start, int end, int idx, int value)
    {
        if (start == end)
        {
            tree[node] = value;
        }
        else
        {
            int mid = (start + end) / 2;
            if (idx <= mid)
                updateTree(2 * node + 1, start, mid, idx, value);
            else
                updateTree(2 * node + 2, mid + 1, end, idx, value);
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
    }

    int queryTree(int node, int start, int end, int L, int R)
    {
        if (R < start || L > end)
            return 0;
        if (L <= start && end <= R)
            return tree[node];
        int mid = (start + end) / 2;
        int leftSum = queryTree(2 * node + 1, start, mid, L, R);
        int rightSum = queryTree(2 * node + 2, mid + 1, end, L, R);
        return leftSum + rightSum;
    }

public:
    SegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n, 0);
        buildTree(arr, 0, 0, n - 1);
    }

    void update(int idx, int value)
    {
        updateTree(0, 0, n - 1, idx, value);
    }

    int query(int L, int R)
    {
        return queryTree(0, 0, n - 1, L, R);
    }
};

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree segTree(arr);

    cout << "Sum of range [1, 3]: " << segTree.query(1, 3) << endl;
    segTree.update(1, 10);
    cout << "Sum of range [1, 3] after update: " << segTree.query(1, 3) << endl;

    return 0;
}