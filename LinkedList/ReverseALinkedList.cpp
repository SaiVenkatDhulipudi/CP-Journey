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
void display(node *root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" ";
    display(root->next);
  }
}
node* reverseList(node* head) {
    node *curr = head;
        node *prev = NULL;
        while(curr != NULL) {
            node *next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
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
  root=reverseList(root);
  display(root);
}
