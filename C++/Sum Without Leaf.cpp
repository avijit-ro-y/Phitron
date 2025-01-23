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
int sum(Node* root){
    
    int summ=0; 
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return summ=summ+0;
    }
    summ=summ+root->val;
    int left_part=sum(root->left);
    int right_part=sum(root->right);

    return left_part+right_part+root->val;  //else{ return 1;}  //ekhne just root count kore result dibe
}
int main(){
    Node* root=input();
    cout<<sum(root);
    return 0;
}