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
    /*IF in the main function size is not provide
    this can be helpful*/
    void getsize()
    {
        if(head==NULL)
        {
            cout<<"NO ELEMENT";
        }
        int counter=0;
        node* ptr=head;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            counter++;
        }
        cout<<"No of elements"<<counter;
    }


    void remove_the_duplicates()
    {
        node* pointer_node =head;
        node* secondary_pointer_node = NULL;
        node* duplicate_node =NULL;
            while(pointer_node!=NULL)
            {
                secondary_pointer_node=pointer_node;
                while(secondary_pointer_node->next!=NULL)
                {

                if(pointer_node->data==secondary_pointer_node->next->data)
                {
                    duplicate_node=secondary_pointer_node->next;
                    secondary_pointer_node->next=secondary_pointer_node->next->next;
                    delete duplicate_node;
                }
                else
                {
                    secondary_pointer_node=secondary_pointer_node->next;
                }
            }
            pointer_node=pointer_node->next;

    }
    }
    //MAKE A LOOP
    void makeloop(int k)
    {
        node* pointer_node =head;
        int count=1;
        while(count<k)
        {
            pointer_node=pointer_node->next;
            count++;
        }

        node* joining_point=pointer_node;

        while(pointer_node->next!=NULL)
        {
            pointer_node=pointer_node->next;
        }
        pointer_node->next=joining_point;
    }



    void del_at_givenkey(int key)
    {
        node* pointer_node = head;
        node* prev;

        if(pointer_node!=NULL && pointer_node->data==key)
        {
            head=pointer_node->next;
            free(pointer_node);
            return;
        }
        while(pointer_node!=NULL && pointer_node->data!=key)
        {
            prev=pointer_node;
            pointer_node=pointer_node->next;
        }
        if(pointer_node==NULL)
        {
            cout<<"ELEMENT NOT FOUND";
            return;
        }
        prev->next=pointer_node->next;
        free(pointer_node);


    }

    void delete_at_start()
    {
        node*temp =head;
        head=head->next;
        free(temp);
    }

    void delete_at_end()
    {
        node* temp=head;
        node* prev;
        if(head==NULL)
        {
            cout<<"EmptyList";
            return;
        }
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        free(temp);
        prev->next=NULL;


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
    //cout<<"Display again"<<endl;

    // object.reversing();
    //USE THIS FUNCTION FOR REVERSING
    //object.display();
    int k;
    cin>>k;
    object.del_at_givenkey(k);
    //object.reverse_after_k_elements(k);
    //THE ABOVE METHOD IS USE TO REVERSE AFTER K ELEMENTS
    //object.remove_the_duplicates();
    object.display();
    //object.delete_at_start();
    //object.display();

    object.delete_at_end();
    object.display();
    return 0;
}
