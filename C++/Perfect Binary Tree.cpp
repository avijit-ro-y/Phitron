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
int count_leaf_node(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    
    int left_part=count_leaf_node(root->left);
    int right_part=count_leaf_node(root->right);

    return left_part+right_part;  //else{ return 1;}  //ekhne just root count kore result dibe
}
int max_hight(Node *root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 0; //leaf node er hight 0
    }
    int node_left=max_hight(root->left);
    int node_right=max_hight(root->right);

    return max(node_left,node_right)+1;

}
int main(){
    Node* root=input();
    int leaf=count_leaf_node(root);
    int max=max_hight(root)-1;

    if (pow(2,max)==leaf/2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}