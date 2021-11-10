#include <iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
};

class linkedlist
{
  Node *head;
  public:
  linkedlist()
  {
    head=NULL;
  }
  void insertatend(int data)
  {
    Node *node=new Node();
    node->data=data;
    node->next=NULL;
    if(head==NULL)
    {
        head=node;
        head->next=head;
    }
    else
    {
      Node *curr;
      for(curr=head;curr->next!=head;curr=curr->next)
      {
      }
      curr->next=node;
      node->next=head;
    }
  }
  void insertatstart(int data)
  {
    Node *node=new Node();
    node->data=data;
    node->next=NULL;
    if(head==NULL)
    {
        head=node;
        head->next=head;
    }
    else
    {
      Node *curr,*temp;
      for(curr=head;curr->next!=head;curr=curr->next)
      {
      }
     temp=head;
     head=node;
     curr->next=head;
     head->next=temp;
    }
  }
    
  void printdata()
  {   
      Node *curr;
      for(curr=head;curr->next!=head;curr=curr->next)
      {
        cout<<curr->data<<" ";
      }
      cout<<curr->data;
  }

};

int main() {
  linkedlist ll;
  char c='y';
  int ch;
  int data;

  while(c=='y')
  {
    cout<<"\nEnter your choice: ";
    cout<<"\n1.Insert Node at start:\n2.Insert Node at end:\n3.Print:\n";
    cin>>ch;
    if(ch==1)
    { cout<<"\nEnter the data: ";
      cin>>data;
      ll.insertatstart(data);
    }
    else if(ch==2)
    {
      cout<<"\nEnter the data: ";
      cin>>data;
      ll.insertatend(data);
    }
    else if(ch==3)
    {
      ll.printdata();
    }
    else
    {
      cout<<"\nInvalid Entry";
    }
    cout<<"\nEnter y to perform operation or n to exit:";
    cin>>c;

  }
  return 0;
 
}
