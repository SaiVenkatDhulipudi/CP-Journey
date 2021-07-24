/*output:
10 20 40 70 
     10
   /     \
  20     30
 /  \     \  
40  50     60
           /
          70
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxlevel=0;
struct node{
  int key;
  struct node *left;
  struct node *right;
   node(int k){
    key=k;
    right=left=NULL;
  }
};
void leftview(node *root,int level){
  if(root==NULL){
    return;
  }
 if(maxlevel<level){
   cout<<(root->key)<<" ";
   maxlevel=level;
 }
 leftview(root->left,level+1);
 leftview(root->right,level+1);
}
void printLeftView(node *root){
    leftview(root,1);
}
int main() {
node *root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left= new node(40);
root->left->right=new node(50);
root->right->right=new node(60);
root->right->right->left=new node(70);
printLeftView(root);
}

