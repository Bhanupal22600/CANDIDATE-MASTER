// print elements of nth level
#include <iostream>
#include<queue>
using namespace std;
class Node
{ // This is a TreeNode
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void nthLevelRev(Node *root, int curr, int level)
{ // right to left printing
    if (root == NULL)
        return; // base case
    if (curr == level)
    {
        cout << root->val << " "; // root
        return;
    }
    // reverse line only
    nthLevelRev(root->right, curr + 1, level); // right
    nthLevelRev(root->left, curr + 1, level);  // left
}
void levelOrderRev(Node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevelRev(root, 1, i);
        cout << endl;
    }
}
void nthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return; // base case
    if (curr == level)
    {
        cout << root->val << " "; // root
        return;
    }
    nthLevel(root->left, curr + 1, level);  // left
    nthLevel(root->right, curr + 1, level); // right
}
void levelOrder(Node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevel(root, 1, i);
        cout << endl;
    }
}
void levelOrderQueue(Node* root){//BFS
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp =q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);// address push ho rha hai us node ka as hamari queue ka data type Node* hai so Node ka address store krega
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main()
{
    Node *a = new Node(1);//root
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // level order traversal
    levelOrder(a);
    cout << endl;
    levelOrderRev(a);
    cout << endl;
    levelOrderQueue(a);
}