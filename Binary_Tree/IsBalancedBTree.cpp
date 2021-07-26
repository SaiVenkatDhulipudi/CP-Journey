/*condition:
the difference between heights of l.s.b and r.s.b shouldnot be more than 1*/
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
int isbalanced(node *root){
  if(root==NULL)return 0;
  int lh=isbalanced(root->left);
  if(lh==-1)return -1;
  int rh=isbalanced(root->right);
  if(rh==-1)return -1;
  if(abs(rh-lh)>1)return -1;
  else{
    return max(lh,rh)+1;
  }
}
int main() {
node *root=new node(18);
root->left=new node(4);
root->right=new node(20);
root->right->left=new node(13);
root->right->right=new node(17);
  if(isbalanced(root)>-1){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
