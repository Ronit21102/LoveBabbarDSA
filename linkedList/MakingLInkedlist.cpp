#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // Node Class Constructor
    node(int val){
        data=val;
        next=NULL;

    }
};

void insertatTail(node* &head , int val)
{
    
    node* noding = new node(val);

    if(head==NULL)
    {
        head = noding;
        return ;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = noding;
}
void display(node* head)
{
    node*temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
  node*head = NULL;
  int n;cin>>n;
  vector<int>arr(n);
  for(int i = 0 ; i< n ; i++)
  {
    cin>>arr[i];
  }
 for(int i = 0 ; i<n ; i++)
 {
    insertatTail(head , arr[i]);
 }
//   insertatTail(head , 1);
//   insertatTail(head , 2);
//   insertatTail(head, 3);
  
  display(head);
}