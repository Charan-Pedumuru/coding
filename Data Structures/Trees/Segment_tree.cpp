//Sum query in a range using segment tree

#include <iostream>
using namespace std;

const int N = 1e5;
int tree[4 * N], arr[N];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

int query(int node, int start, int end, int l, int r)
{
    if (r < start || end < l)
        return 0;
    if (l <= start && end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    return query(2 * node, start, mid, l, r) + query(2 * node + 1, mid + 1, end, l, r);
}

int main()
{
    int n = 5;
    arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;

    build(1, 0, n - 1);
    cout << "Sum of range (1, 3): " << query(1, 0, n - 1, 1, 3) << endl;

    return 0;
}
