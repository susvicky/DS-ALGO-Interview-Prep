#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int info;
        node *next;
};
node *root = NULL;

//creating node
node *createnode(int val)
{
    node *n = (node*)malloc(sizeof(node));
    n->info = val;
    n->next = NULL;
    return n;
}

//inserting node at end of linked list
void insert(int val)
{
    node *temp = root;

    node *n = createnode(val);
    if(root==NULL)
    {
        root=n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//Displaying the linked list
void view()
{
    if(root==NULL)
    {
        cout<<"linked list is empty\n";
        return;
    }
    node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->next;
    }

}

//creating linked list using vector
void func()
{
    int val,n;
    vector<int>v;
    cout<<"enter the size of linked list\n";
    cin>>n;
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    root = createnode(v[0]);
    node *temp  = root;
    int index = 1;
    while(index<n)
    {
        node *n = createnode(v[index]);
        index++;    
        temp->next = n;
        temp = temp->next;
    }
}

//reverse linked list
void reverse_linked_list()
{
    if(root==NULL)
    {
        cout<<"linked list is empty\n";
        return;
    }
    node *t1 = NULL, *t2 = NULL;
    while(root!=NULL)
    {
        t1 = root->next;
        root->next = t2;
        t2 = root;
        root = t1;
    }
    root = t2;
    cout<<"linked list reversed sucessfully\n";
    view();
}

//middle element
void middle_element()
{
    node *slow = root,*fast = root;
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"middle element of the linked list is: "<<slow->info<<"\n";
}

//detect cycle in linked list
void cycle_detect()
{
    node *slow = root,*fast = root;
    int flag = 0;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"loop does not exist\n";
        return;
    }
    else
    {
        slow = root;
        while(slow!=fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    cout<<"starting point of the loop is "<<slow->info<<"\n";
}


int main()
{
    int loop = 1;

    while(loop==1)
    {
        int option;
        cout<<"choose the operation to perform\n";
        cout<<"1.Insert node at the end of linkedlist\n";
        cout<<"2.Display linkedlist\n";
        cout<<"3.create a linked list from vector\n";
        cout<<"4.reverse linked list\n";
        cout<<"5.Find middle element of linked list\n";
        cout<<"6.Detect starting point of loop in linked list\n";
        cin>>option;
        if(option==1)
        {
            int val;
            cout<<"enter the value\n";
            cin>>val;
            insert(val);
        }
        else if(option==2)
        {
            view();
        }
        else if(option==3)
        {
            func();
        }
        else if(option==4)
        {
            func();
            reverse_linked_list();
        }
        else if(option==5)
        {
            func();
            middle_element();
        }
        else if(option==6)
        {
            func();
            int a;
            cout<<"enter the node to create loop\n";
            cin>>a;
            node *temp1 = root;
            node *temp2 = root;
            while(temp1->next!=NULL)
            {
                temp1 = temp1->next;
            }
            while(temp2->info!=a)
            {
                temp2 = temp2->next;
            }
            temp1->next = temp2;
            cycle_detect();
        }
        cout<<"wanna perform more operations?(1->yes  0->no)\n";
        cin>>loop;
    }
    return 0;
}