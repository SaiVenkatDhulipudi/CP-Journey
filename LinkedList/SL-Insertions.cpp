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
//InsertATEnd
node *InsertATEnd(node *head,int x)
{
  if(head==NULL)
  {
    return new node(x);
  }
  else
  {
    head->next=InsertATEnd(head->next,x);
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
//InsertATBegin
node *InsertATBegin(node *head,int x)
{
  node *temp=new node(x);
  temp->next=head;
  return head=temp;
}
//insertATpos
node *insertATpos(node *head,int pos,int x)
{
  if(pos==1)
  {
    return InsertATBegin(head,x);
  }
  else
  {
    node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
      if(temp->next==NULL)
      {
        cout<<"invalid"<<endl;
        return head;
      }
      else
      {
        temp=temp->next;
      }
    }
    node *nex=temp->next;
    temp->next=new node(x);
    temp->next->next=nex;
  }
  return head;
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
  head=InsertATEnd(head,k);
}
head=insertATpos(head,1,8);
display(head);
}
