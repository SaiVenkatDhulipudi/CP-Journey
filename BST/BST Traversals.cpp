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
node *createTree(node *root,int x)
{
if (root ==NULL){
	return new node(x);
}
else if(root->data<x){
root->right=createTree(root->right, x);
}
else if(root->data>x){
root->left=createTree(root->left, x);
}
return root;
}
void inorder(node *root)
{
if (root==NULL){
	return;
}
else{
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
}
void postorder(node *root)
{
if (root==NULL){
	return;
}
else{
	inorder(root->left);
	inorder(root->right);
	cout<<root->data<<" ";
}
}
void preorder(node *root)
{
if (root==NULL){
	return;
}
else{
	cout<<root->data<<" ";
	inorder(root->left);
	inorder(root->right);
}
}
int main()
{
int n;
cin>>n;
node *root=NULL;
for( int i=0;i<n;i++){
	int k;
	cin>>k;
	root=createTree(root,k);
}
cout<<"Inorder:";
inorder(root);
cout<<endl;
cout<<"Postorder:";
postorder(root);
cout<<endl;
cout<<"Preorder:";
preorder(root);
}
