#include<bits/stdc++.h>
using namespace std;

class node{
    int info;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void is_empty()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"queue is empty\n";
    }
    else
    {
        cout<<"queue is not empty\n";
    }
}


//inserting element 
void enqueue(int val)
{
    
    node *n = new node();
    n->info = val;
    n->next = NULL;
    if(front==NULL && rear==NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }

}

// remove element
void dequeue()
{
    if(is_empty())
    {
        cout<<"queue is empty\n";
        return;
    }
    else
    {
        node *temp = front;
        if(front==rear)
        {
            front = NULL;
            rear = NULLL;
        }
        else
        {
            front = front->next;
            delete (temp);
        }
    }
}
int main()
{
    int loop = 1;
    while(loop==1)
    {
        cout<<"1.check if queue is empty\n";
        cout<<"2.Insert element in queue\n";
        cout<<"3.remove element from queue\n";

        int option;
        cin>>option;

        if(option==1)
        {
            is_empty();
        }
        else if(option==2)
        {
            int val;
            cout<<"enter the value\n";
            cin>>val;
            enqueue(val);
        }
        else if(option==3)
        {
            dequeue();
        }

    }
}