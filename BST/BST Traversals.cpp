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
if (root==NULL){
	return new node(x);
}
else if(x<root->data){
	root->left=createTree(root->left, x);
}
else if(x>root->data){
root->right=createTree(root->right, x);
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
	postorder(root->left);
	postorder(root->right);
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
	preorder(root->left);
	preorder(root->right);
}
}
int main()
{
int n;
cin>>n;
node *root;
for( int i=0;i<n;i++)
{
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
