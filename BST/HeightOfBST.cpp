#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
int height(struct node *root){
	if(root==NULL){
		return 0;
	}
	else{
		return max(height(root->left),height(root->right))+1;
	}
}
struct node *create(int k){
struct node *temp=(struct node*)malloc(sizeof (struct node));
temp->data=k;
temp->right=NULL;
temp->left=NULL;
return temp;
}
struct node * insert(struct node *root,int k){
if (root==NULL){
	return create(k);
}
else if(k<root->data){
	root->left=insert(root->left,k);
}
else if(k>root->data)
{
	root->right=insert(root->right,k);
}
return root;
}
int main()
{
	int n;
	cin>>n;
	struct node *root=NULL;
for(int i=0;i<n;i++){
	int key;
	cin>>key;
root=insert(root,key);
}
cout<<height(root);
}
