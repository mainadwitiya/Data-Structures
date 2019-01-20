#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

class LinkedList
{
private:
    node* head;
public:
    LinkedList()
    {
    head=NULL;
    }


    void insert_node_at_beg(int data)
    {

        node* newnode = new node;
        newnode->data = data;
        newnode->next=head;
        head=newnode;
    }

    void insert_node_at_end(int data)
    {
        node* newnode = new node;
        newnode->data =data;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node *ptr = head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }

    void insert_at_at_point(int data,int key)
    {
        node* newnode = new node;
        newnode->data=data;
        newnode->next =NULL;
        node *ptr =head;
        while(ptr!=NULL)
        {
            if(ptr->data==key)
            {
                newnode->next = ptr->next;
                ptr->next=newnode;
                break;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(ptr==NULL)
        {
            cout<<"ELEMENT NOT FOUND";
        }

    }

    void display()
    {
        node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

//reverse the whole linked list
    void reversing()
    {
        node *curr=head;
        node *prev =NULL;
        node *next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
       head=prev;


    }


    //reverse the first k elements of a linked list
    void reverse_after_k_elements(int k)
    {

        node* temp=head;
        int count =1;
        while(count<k)
        {
            temp=temp->next;
            count++;
        }
        node* break_point = temp->next;
        temp->next=NULL;
        node* curr=head;
        node* prev=NULL;
        node* next=NULL;
        while(curr!=NULL)
        {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
        head=prev;
        curr=head;

        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=break_point;


    }

};

int main()
{

    LinkedList object;
    int n,data;
    cin>>n;
    while(n--)
    {
        cin>>data;
        object.insert_node_at_beg(data);
    }
    object.display();
    cout<<"Display again"<<endl;
    object.reversing();
    object.display();
    int k;
    cin>>k;
    object.reverse_after_k_elements(k);
    object.display();
    return 0;
}
