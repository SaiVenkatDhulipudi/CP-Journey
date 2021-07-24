/*INPUT:
8
10 20 30 40 50 60 70 100
OUTPUT:
4
     10
   /     \
  20     30
 /  \   /  \
40  50 60   70
/
100
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
int height(node *root){
  if(root ==NULL){
    return 0;
  }
  else{
    return max(height(root->left),height(root->right))+1;
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
cout<<height(root);
}

