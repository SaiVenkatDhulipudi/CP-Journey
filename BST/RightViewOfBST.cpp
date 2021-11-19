#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left;
struct node *right;
node(int x){
  data=x;
  left=right=NULL;
}
};
node *createnode(node *root,int x)
{
  if(root==NULL)
  {
    return new node(x);
  }
  else if(x<root->data){
    root->left=createnode(root->left,x);
  }
  else if(x>root->data){
    root->right=createnode(root->right,x);
  }
  return root;
}
void rightview(node *root){
if (root==NULL){
  return;
}

queue<node*>q;
q.push(root);
while(!q.empty()){
int n=q.size();
while(n--)
{
node *x=q.front();
q.pop();
if(n==0){
  cout<<x->data<<" ";
}
if(x->left){
  q.push(x->left);
}
 if(x->right){
  q.push(x->right);
}
}
}
}
int main()
{
  int n;
  node *root=NULL;
  cin>> n;
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
   root=createnode(root,k);
  }
  rightview(root);
}
