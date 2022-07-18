#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head , int val)
{
     node* new_node = new node(val);
    if(head==NULL)
    {
        head = new_node;
        return;
    }
   
    node *temp = head;

    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = new_node;
}
void insertAtbegin(node*&head , int k)
{
    node* naya_node = new node(k);
    naya_node->next = head;
    head = naya_node;
}
void display(node* head)
{
    while(head->next!=NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
   node* head = NULL;
   int n;cin>>n;
   vector<int>arr(n);
  for(int i = 0 ; i< n ; i++)
    cin>>arr[i];
 
   for(int i = 0 ; i<n ; i++)
     insert(head ,arr[i] );

    int k;cin>>k;
    insertAtbegin(head , k);
    display(head);
}