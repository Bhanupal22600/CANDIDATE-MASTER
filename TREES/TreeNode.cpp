#include<iostream>
#include<climits>
using namespace std;
class Node{// This is a TreeNode
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val =val;
        this->left =NULL;
        this->right =NULL;
    }
};
void displayTree(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

//dfstraversals - preorder,inorder,postorder
// T.C =O(N);
//S.C =O(levels+1)~O(h) h-height
void preorder(Node* root){
    if(root==NULL) return;//base case

    cout<<root->val<<" ";// root
    preorder(root->left);//left
    preorder(root->right);//right
}
void inorder(Node* root){
    if(root==NULL) return;//base case
    
    inorder(root->left);//left
    cout<<root->val<<" ";// root
    inorder(root->right);//right
}
void postorder(Node* root){
    if(root==NULL) return;//base case
    
    postorder(root->left);//left
    postorder(root->right);//right
    cout<<root->val<<" ";// root
}
int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxInTree(Node* root){
    if(root==NULL) return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val,max(lMax,rMax));
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
int main(){
    /*Node a;
    a.val=10;
    a.left=NULL
    a.right=NULL;*/
    Node*  a = new Node(1);// above 3 line can be in one line 
    Node*  b = new Node(2);// b ek Node data type ka pointer hai
    Node*  c = new Node(3);
    Node*  d = new Node(4);
    Node*  e = new Node(5);
    Node*  f = new Node(6);
    Node*  g = new Node(7);

    // *a.(left) we can also write bt below -> is easy
    a->left =b;// abe dekh a jo hai wo ek object hai Node class(user defined data type)
    // ka ab esme 3 things hai 1st is int val esme jo hai int data type ki value aayegi 
    // 2nd is *Node left as we know like int *ptr store krta hai only int datatype ka address similarly
    // *Node jo hai na wo bhi address store krega hamare user defined data structure ka 
    //jis addresss se hm 3 things get krsakte hai like val,right ka address,left ka address jo esi node m 3 dabbe m store hai
    // similarly *Node right
    a->right =c;// -> yeh kuch nhi hai like to print value of int a=5 in pointer we write,
    // int *ptr=&a,then cout<<*ptr , toh a k dabbe m jo val hai usko leaayo 
    // similarly here a(ek NODE data str ka variable hai) wo (3 thing carry krta hai we know ) ,now
    // instead of writing *a.(right) we do this a->right , as agar kisi bhi data struc m 
    //only one thing store hoti hai toh we can only do *a to get value of jiska address *a m tha now when 
    // a pointer store more than 1 value then we have to write *a.left,*a.right ,*a.val to get us data str m kiski val as our pointer is 
    // also of *Node data type toh woh kisi bhi Node ka address store krlega (jisme all three thing have this same addrs)

    b->left = d;
    b->right = e;
    c->left = f;
    c->right= g;
    displayTree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxInTree(a)<<endl;
    cout<<levels(a)<<endl;

}