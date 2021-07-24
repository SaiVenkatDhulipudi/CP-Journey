/*
input:
8
10 20 30 40 50 60 70 100
4
0
1
2
3
     10
   /     \
  20     30
 /  \   /  \
40  50 60   70
/
100
output:
10 
20 30 
40 50 60 70 
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
void printnodesatKdistance(node *root,int k){
  if(root==NULL)return;
if(k==0)cout<<(root->key)<<" ";
else{
  printnodesatKdistance(root->left,k-1);
  printnodesatKdistance(root->right,k-1);
}
}
int main() {
int n,T;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
node *root=CreateTree(v,root,0,n);
cin>>T;
while(T--){
  int k;
cin>>k;
printnodesatKdistance(root,k);
cout<<endl;
}
}
