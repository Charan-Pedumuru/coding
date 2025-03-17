#include <iostream>
using namespace std;

struct Node
{
    int data, height;
    Node *left, *right;

    Node(int val) : data(val), height(1), left(nullptr), right(nullptr) {}
};

int height(Node *node)
{
    return node ? node->height : 0;
}

int getBalanceFactor(Node *node)
{
    return node ? height(node->left) - height(node->right) : 0;
}

Node *rotateRight(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

int main()
{
    Node *root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(10);

    cout << "Before Rotation, Root: " << root->data << endl;
    root = rotateRight(root);
    cout << "After Rotation, New Root: " << root->data << endl;

    return 0;
}
