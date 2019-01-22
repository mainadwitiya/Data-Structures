    #include <iostream>
    #include <stdlib.h>

    using namespace std;

    struct node{
        int data;
        node* left;
        node* right;
    };
    class Tree
    {

    public:
       node* root;
       Tree(){
        root=NULL;
       }

     node* createNewNode(int data)
     {
         node* newnode = new node;
         newnode->data=data;
         newnode->left=NULL;
         newnode->right=NULL;
             return newnode;
     }

     node* insertElement(node* ptr , int data)
     {

         node* newnode = createNewNode(data);

        if(ptr==NULL)
        {
            return newnode;

        }
        if(data<ptr->data)
        {
            ptr->left=insertElement(ptr->left,data);

        }
        if(data>ptr->data)
        {
            ptr->right=insertElement(ptr->right,data);

        }
        return ptr;
        //THE ABOVE STATEMENT RETURNS UNCHANGED BECAUSE ELEMENT ALREADY EXISTS
     }


     void inorder(node* ptr)
     {
         if(ptr!=NULL)
         {
             inorder(ptr->left);
             cout<<ptr->data<<" ";
             inorder(ptr->right);
         }
     }
     void preorder(node* ptr)

     {

         if(ptr!=NULL)
         {
             cout<<ptr->data<<" ";
             preorder(ptr->left);
             preorder(ptr->right);
         }
     }

     void postorder(node* ptr)
     {

         if(ptr!=NULL)
         {
            postorder(ptr->left);
            postorder(ptr->right);
            cout<<ptr->data<<" ";
         }
     }

     void print_between_a_range(node* root, int k1,int k2)
     {
         if(NULL==root)
         {
             return;
         }

         if(k1<root->data)
         {

             print_between_a_range(root->left,k1,k2);

         }
         if(k1<=root->data && k2>=root->data)
         {
             cout<<root->data<<" ";
         }
         if(k2>root->data)
         {
             print_between_a_range(root->right,k1,k2);
         }
     }



    };





    int main()
    {
       Tree obj;
       int n;
       cin>>n;
       int data;
       cin>>data;
       obj.root=obj.insertElement(obj.root,data);
       for(int i=2;i<=n;i++)
       {
           cin>>data;
           obj.insertElement(obj.root,data);

       }
       cout<<"inorder"<<endl;
       obj.inorder(obj.root);
        cout<<endl<<"preorder"<<endl;
       obj.preorder(obj.root);

        cout<<endl<<"postorder"<<endl;
       obj.postorder(obj.root);
        cout<<endl;
       int k1,k2;
       cin>>k1>>k2;
       cout<<endl<<"ELEMENTS BETWEEN THE GIVEN RANGE ARE"<<endl;

       obj.print_between_a_range(obj.root,k1,k2);

        return 0;
    }
