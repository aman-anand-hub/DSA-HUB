#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void LOTbyline(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        Node* curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<' ';
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }      
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    LOTbyline(root);
    return 0;
}