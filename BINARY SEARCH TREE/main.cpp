    #include <iostream>

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
       obj.inorder(obj.root);

        return 0;
    }
