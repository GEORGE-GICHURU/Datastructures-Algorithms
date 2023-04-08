#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int main()
{
    Node *root = new Node();
    Node *left = new Node();
    Node *right = new Node();

    root->data = 1;
    root->left = left;
    root->right = right;

    left->data = 2;
    left->left = NULL;
    left->right = NULL;

    right->data = 3;
    right->left = NULL;
    right->right = NULL;

    cout << root->data << "" << root->left->data << "" << root->right->data;
    return 0;
}