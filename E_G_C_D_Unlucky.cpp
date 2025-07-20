/* // print boundary of a tree
#include <iostream>
#include<queue>
#include<climits>
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
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root =new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp =q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left =l;
        temp->right =r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        
        i+=2;
        j+=2;

    }
    return root;
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
int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
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

void HorzLevel(Node* root,int& minLevel,int& maxLevel,int level){
    if(root==NULL) return;//base case

    minLevel = min(minLevel,level);
    maxLevel = max(maxLevel,level);
    HorzLevel(root->left,minLevel,maxLevel,level-1);//left
    HorzLevel(root->right,minLevel,maxLevel,level+1);//right
}
void topview(vector<int>& top,Node* root,int level){
    if(root==NULL) return;
    if(top[level]==INT_MIN) top[level]=root->val;
    topview(top,root->left,level-1);
    topview(top,root->right,level+1);
}
int main()
{
    // construct
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root =construct(arr,n);
    // levelOrder(root)
    // boundary traversal
    int minLevel = 0;
    int maxLevel= 0;
    HorzLevel(root,minLevel,maxLevel,0);
    int horLevels = maxLevel - minLevel + 1;
    vector<int> top(horLevels,INT_MIN);
    topview(top,root,-minLevel);
    for(int i=0;i<top.size();i++){
        cout<<top[i]<<" ";
    }

}*/#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll g(ll a, ll b){return b?g(b,a%b):a;}

void calc(){
    int n;cin>>n;
    vector<ll> p(n),s(n),a(n);
    for(int i=0;i<n;i++)cin>>p[i];
    for(int i=0;i<n;i++)cin>>s[i];
    if(n==1){
        cout<<(p[0]==s[0]?"YES":"NO")<<'\n';
        return;
    }
    if(p.back()!=s.front()){
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<n;i++)if(p[i-1]%p[i]){cout<<"NO\n";return;}
    for(int i=0;i+1<n;i++)if(s[i+1]%s[i]){cout<<"NO\n";return;}
    for(int i=0;i<n;i++){
        ll gg=g(p[i],s[i]);
        a[i]=p[i]/gg*s[i];
    }
    for(int i=0;i<n;i++){
        if(i&&g(p[i-1],a[i])!=p[i]){cout<<"NO\n";return;}
        if(i+1<n&&g(a[i],s[i+1])!=s[i]){cout<<"NO\n";return;}
    }
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)calc();
    return 0;
}
