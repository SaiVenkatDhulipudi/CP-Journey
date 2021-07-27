/*input:
5
20 10 40 30 50
10 20 30 40 50
output:
20 40 50 30 10 
*/
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
int preIndex=0;
node *cTree(vector<int>&in,vector<int>&pre,int is,int ie){
    if(is>ie)return NULL;
    node *root=new node(pre[preIndex++]);
    
    int inIndex;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->key){
            inIndex=i;
            break;
        }
    }
    root->left=cTree(in, pre, is, inIndex-1);
    root->right=cTree(in, pre, inIndex+1, ie);
    return root;
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
vector<int>in(n),pre(n);
for(int i=0;i<n;i++){
  cin>>in[i];
}
for(int i=0;i<n;i++){
  cin>>pre[i];
}
node *root=cTree(in,pre,0,n-1);
 PostOrderTraversal(root);
}
