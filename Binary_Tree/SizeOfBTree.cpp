/*output:7
     10
   /     \
  20     30
 /  \   /  \
40  50 60   70
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
int getsize(node *root){
  if(root ==NULL){
    return 0;
  }
  else{
    return 1+getsize(root->left)+getsize(root->right);
  }
}
int main() {
node *root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left= new node(40);
root->left->right=new node(50);
root->right->left=new node(60);
root->right->right=new node(70);
cout<<getsize(root);
}

