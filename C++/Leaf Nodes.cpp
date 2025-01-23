#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input(){
    int data;
    cin>>data;
    Node* root;
    if (data==-1)
    {
        cout<<"No tree";
    }
    else{
        root=new Node(data);
    }
    queue<Node *>q;
    q.push(root);
    while (!q.empty())
    {
        //1
        Node* p=q.front();
        q.pop();
        
        //2
        int l,r;
        cin>>l>>r;
        Node* node_left;
        Node* node_right;
        if (l==-1)
        {
            node_left=NULL;
        }
        else
        {
            node_left=new Node(l);
        }
        if (r==-1)
        {
            node_right=NULL;
        }
        else
        {
            node_right=new Node(r);
        }
        p->left=node_left;
        p->right=node_right;
        
        //3
        if (p->left) //p.left != NULL
        {
            q.push(p->left);
        }
        if (p->right) //p.right != NULL
        {
            q.push(p->right);
        }
        
    }
    return root;
}
list<int> leaf_node(Node* root){
    list<int>l;
    if (root==NULL)
    {
        return l;
    }
    if (root->left==NULL && root->right==NULL)
    {
        l.push_back(root->val);
    }
    list<int> left_part=leaf_node(root->left);
    list<int> right_part=leaf_node(root->right);

    l.insert(l.end(),left_part.begin(),left_part.end());
    l.insert(l.end(),right_part.begin(),right_part.end());
    return l;
}
int main(){
    Node* root=input();
    list<int> leaf=leaf_node(root);
    leaf.sort(greater<int>());
    for(auto data:leaf){
        cout<<data<<" ";
    }
    return 0;
}