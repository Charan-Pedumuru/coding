#include <iostream>
using namespace std;

enum Color
{
    RED,
    BLACK
};

struct Node
{
    int data;
    Color color;
    Node *left, *right, *parent;

    Node(int data)
    {
        this->data = data;
        color = RED;
        left = right = parent = nullptr;
    }
};

class RedBlackTree
{
private:
    Node *root;

    void rotateLeft(Node *&ptr)
    {
        Node *rightChild = ptr->right;
        ptr->right = rightChild->left;
        if (ptr->right)
            ptr->right->parent = ptr;
        rightChild->parent = ptr->parent;
        if (!ptr->parent)
            root = rightChild;
        else if (ptr == ptr->parent->left)
            ptr->parent->left = rightChild;
        else
            ptr->parent->right = rightChild;
        rightChild->left = ptr;
        ptr->parent = rightChild;
    }

    void rotateRight(Node *&ptr)
    {
        Node *leftChild = ptr->left;
        ptr->left = leftChild->right;
        if (ptr->left)
            ptr->left->parent = ptr;
        leftChild->parent = ptr->parent;
        if (!ptr->parent)
            root = leftChild;
        else if (ptr == ptr->parent->left)
            ptr->parent->left = leftChild;
        else
            ptr->parent->right = leftChild;
        leftChild->right = ptr;
        ptr->parent = leftChild;
    }

    void fixViolation(Node *&ptr)
    {
        Node *parent = nullptr;
        Node *grandparent = nullptr;
        while (ptr != root && ptr->color == RED && ptr->parent->color == RED)
        {
            parent = ptr->parent;
            grandparent = parent->parent;
            if (parent == grandparent->left)
            {
                Node *uncle = grandparent->right;
                if (uncle && uncle->color == RED)
                {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    ptr = grandparent;
                }
                else
                {
                    if (ptr == parent->right)
                    {
                        rotateLeft(parent);
                        ptr = parent;
                        parent = ptr->parent;
                    }
                    rotateRight(grandparent);
                    swap(parent->color, grandparent->color);
                    ptr = parent;
                }
            }
            else
            {
                Node *uncle = grandparent->left;
                if (uncle && uncle->color == RED)
                {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    ptr = grandparent;
                }
                else
                {
                    if (ptr == parent->left)
                    {
                        rotateRight(parent);
                        ptr = parent;
                        parent = ptr->parent;
                    }
                    rotateLeft(grandparent);
                    swap(parent->color, grandparent->color);
                    ptr = parent;
                }
            }
        }
        root->color = BLACK;
    }

public:
    RedBlackTree() { root = nullptr; }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (!root)
        {
            newNode->color = BLACK;
            root = newNode;
        }
        else
        {
            Node *parent = nullptr, *current = root;
            while (current)
            {
                parent = current;
                if (newNode->data < current->data)
                    current = current->left;
                else
                    current = current->right;
            }
            newNode->parent = parent;
            if (newNode->data < parent->data)
                parent->left = newNode;
            else
                parent->right = newNode;
            fixViolation(newNode);
        }
    }

    void inorderHelper(Node *root)
    {
        if (!root)
            return;
        inorderHelper(root->left);
        cout << root->data << " ";
        inorderHelper(root->right);
    }

    void inorder()
    {
        inorderHelper(root);
        cout << endl;
    }
};

int main()
{
    RedBlackTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(15);
    tree.insert(25);

    cout << "Inorder traversal: ";
    tree.inorder();

    return 0;
}