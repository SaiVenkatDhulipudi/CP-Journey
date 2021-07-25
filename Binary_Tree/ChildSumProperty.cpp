#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct node
{
  int key;
 struct node *left;
struct node *right;
node(int k){
    key=k;
    left=right=NULL;
  }
};
bool issum(node *root){
  if(root==NULL)return true;
  if(root->left==NULL&&root->right==NULL)return true;
  int sum=0;
  if(root->left!=NULL)sum+=root->left->key;
  if(root->right!=NULL)sum+=root->right->key;
  return (root->key==sum&&issum(root->left)&&issum(root->right));
}
int main() {
node *root=new node(20);
root->left=new node(8);
root->right=new node(12);
root->right->left=new node(3);
root->right->right=new node(9);
root->right->left->right=new node(3);
  if(issum(root)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
