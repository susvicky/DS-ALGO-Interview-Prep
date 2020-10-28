#include<bits/stdc++.h>
using namespace std;

class stacknode{
    public:
        int info;
        stacknode *next;
};
stacknode *top = NULL;


// check if stack is empty
bool check_empty()
{
    if(top==NULL)
    {
        return true;
    }
    return false;
}

// push elements in stack
void push(int val)
{    
    stacknode *n = new stacknode();
    n->info = val;
    n->next = top;
    top = n;
    
}

// pop element from stack
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
        return ;
    }
    stacknode *temp = top;
    top = top->next;
    delete temp;
}

//view elements of stack
void view()
{
    stacknode *temp = top;
    while(temp!=NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

// size of stack
void size()
{
    int cnt = 1;
    stacknode *temp = top;
    while(temp->next!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"size of stack is "<<cnt<<"\n";
}

// top of stack
void get_top()
{
    if(top==NULL)
    {
        cout<<" Stack is empty \n";
    }
    else
    {
        cout<<top->info<<"\n";
    }
}
int main()
{
    int loop = 1;

    while(loop==1)
    {
        int option;
        cout<<"1.Check if stack is empty\n";
        cout<<"2.push elements in stack\n";
        cout<<"3.pop element from stack\n";
        cout<<"4.view elements of stack\n";
        cout<<"5. size of stack\n";
        cout<<"6.top of stack\n";
        cin>>option;
        if(option==1)
        {
            if(check_empty())
            {
                cout<<"stack is empty\n";
            }
            else
            {
                cout<<"stack is not empty\n";
            }
        }
        else if(option==2)
        {
            int val;
            cout<<"enter the value\n";
            cin>>val;
            push(val);
        }
        else if(option==3)
        {
            pop();
        }
        else if(option==4)
        {
            view();
        }
        else if(option==5)
        {
            size();
        }
        else if(option==6)
        {
            get_top();
        }
        cout<<"Wanna perform more operations 1->yes 0->no\n";
        cin>>loop;
    }

    return 0;
}