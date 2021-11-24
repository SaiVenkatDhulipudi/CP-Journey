#include <bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node *next;
  node(int x)
  {
    data=x;
    next=NULL;
  }
};
//display
void display(node *root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" ";
    display(root->next);
  }
}
//create sll
node *create(node *root,int x)
{
  if(root==NULL)
  {
    return new node(x);
  }
  else
  {
   root->next=create(root->next,x);
  }
  return root;
}

int main()
{
  int n,k;
  cin>>n;
  node *root=NULL;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    root=create(root,k);
  }
  display(root);
}
