#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct node
{
  int data;
  struct node *next;
  node(int k)
  {
    data=k;
    next=NULL;
  }
};
// create
node *create(node *head,int x)
{
  if(head==NULL)
  {
    return new node(x);
  }
  else
  {
    head->next=create(head->next,x);
  }
  return head;
}
//DeleteATEnd
node *DeleteATEnd(node *head)
{
  if(head==NULL)
  {
    cout<<"invalid"<<endl;
  }
  else
  {
    node *pre,*temp=head;
    while(temp->next!=NULL)
    {
      pre=temp;
      temp=temp->next;
    }
    pre->next=NULL;
    free(temp);
  }
  return head;
}
//DeleteATBegin
node *DeleteATBegin(node *head)
{
 node *temp=head;
 head=head->next;
 free(temp);
 return head;
}
//DeleteATpos
node *DeleteATpos(node *head,int pos)
{
  if(pos==1)
  {
    return DeleteATBegin(head);
  }
  else
  {
    node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
    if(temp->next->next==NULL)
    {
      cout<<"invalid\n";
      return head;
    }
    else
    {
    temp=temp->next;
    }
    }
    node *nex=temp->next;
    temp->next=nex->next;
    free(nex);
  }
  return head;
}
//display 
void display(node *head)
{
  while(head!=NULL)
{
  cout<<head->data<<" ";
  head=head->next;
}
cout<<endl;
}
int main()
{
int n;
cin>>n;
node *head=NULL;
for(int i=0;i<n;i++)
{
  int k;
  cin>>k;
  head=create(head,k);
}
}
