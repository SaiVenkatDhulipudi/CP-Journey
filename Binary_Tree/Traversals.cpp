/*input:
7
10 20 30 40 50 60 70
output:
PREORDER TRAVERSAL OF THE BINARYTREE
10 20 40 50 30 60 70 
INORDER TRAVERSAL OF THE BINARYTREE
40 20 50 10 60 30 70 
POSTORDER TRAVERSAL OF THE BINARYTREE
40 50 20 60 70 30 10 
LEVELORDER TRAVERSAL OF THE BINARYTREE
10 
20 30 
40 50 60 70 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
  int key;
  struct node *left;
  struct node *right;
   node(int k){
    key=k;
    right=left=NULL;
  }
};
 
node *CreateTree(vector<int>&v,node *root,int i,int n){
 if(i<n){
  node *temp=new node(v[i]);
  root=temp;
  root->left=CreateTree(v,root->left,2*i+1,n);
  root->right=CreateTree(v,root->right,2*i+2,n);
}
return root;
}
void printlevelorder(node *root){
  if(root==NULL){
    return;
  }
  queue<node *>q;
  q.push(root);
  while(q.empty()==false){
 int count=q.size();
  for(int i=0;i<count;i++){
    node *curr=q.front();
    q.pop();
    cout<<curr->key<<" ";
    if(curr->left!=NULL)q.push(curr->left);
    if(curr->right!=NULL)q.push(curr->right);
  }
  cout<<endl;
}
}
void PreOrderTraversal(node *root){
   if(root!=NULL){
    cout<<(root->key)<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
  }
}
void InOrderTraversal(node *root){
  if(root!=NULL){
    InOrderTraversal(root->left);
    cout<<(root->key)<<" ";
    InOrderTraversal(root->right);
  }
}
void PostOrderTraversal(node *root){
  if(root!=NULL){
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<(root->key)<<" ";
  } 
}
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
node *root=CreateTree(v,root,0,n);
cout<<"PREORDER TRAVERSAL OF THE BINARYTREE"<<endl;
PreOrderTraversal(root);
cout<<"\nINORDER TRAVERSAL OF THE BINARYTREE"<<endl;
InOrderTraversal(root);
cout<<"\nPOSTORDER TRAVERSAL OF THE BINARYTREE"<<endl;
PostOrderTraversal(root);
cout<<"\nLEVELORDER TRAVERSAL OF THE BINARYTREE"<<endl;
printlevelorder(root);
}
