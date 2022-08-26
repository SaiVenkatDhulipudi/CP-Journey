
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

bool detectLoop(node* head)
{
   
    node* temp;
    while (head != NULL) {
        // This condition is for the case when there is no loop
        if (head->next == NULL)
            return false;
        // Check if next is already pointing to temp
        if (head->next == temp)
            return true;
        // Store the pointer to the next node
        // in order to get to it in the next step
        node* next = head->next;
        // Make next point to temp
        head->next = temp;
        // Get to the next node in the list
        head = next;
    }
    //slow pointer and fast pointer fast pointer is ahead of slow by 2 pointer
    return false;
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
  cout<<detectLoop(root);
}
