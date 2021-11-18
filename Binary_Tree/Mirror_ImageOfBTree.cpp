/*
i/p:
5
5 3 6 2 4
o/p:
2 3 4 5 6 
6 5 4 3 2 
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
node(int k){
data=k;
left=right=NULL;
}
};
node *createtree(vector<int>&v,node *root,int i,int n)
{
if(i<n){
	node *temp=new node(v[i]);
	root=temp;
	root->left=createtree(v, root->left, 2*i+1,n);
	root->right=createtree(v, root->right, 2*i+2,n);
}
return root;
}
void inorder1(node *root){
	if(root==NULL){
		return;
	}
	else
	{
		inorder1(root->left);
		cout<<root->data<<" ";
		inorder1(root->right);
	}
}
void inorder2(node *root){
	if(root==NULL){
		return;
	}
	else
	{
		inorder2(root->right);
		cout<<root->data<<" ";
		inorder2(root->left);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	node *root=createtree(v,root,0,n);
	inorder1(root);
	cout<<endl;
	inorder2(root);
}
