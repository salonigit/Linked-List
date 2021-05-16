#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
Node* first;

int create(int x[],int n){
    Node* t;
    Node*last;
    first=new Node();
    first->next=NULL;
    first->data=x[0];
    last=first;
    for(int i=1;i<(n);i++){
        t=new Node();
        t->next=NULL;
        t->data=x[i];
        // cout<<t->data<<endl;
        last->next=t;
        last=t;
    }
    return 0;
}

int display(Node *p,int count){
     while(p!=NULL)
     {
         cout<<p->data;
         count++;
         p=p->next;
     }
     cout<<endl;
     return count;
}

int insert(Node*p,int index,int key,int count){
    Node* t;
    t=new Node();
    t->data=key;
    t->next=NULL;
    if(index<0 || index >count)
    {return 0;}
    if(index==0)
    {
        t->next=p;
        first=t;
        count++;
        return 0;
    }
    else
    {
        for(int i=1;i<=count;i++)
        {
            if(i==index)
            {
                t->next=p->next;
                p->next=t;
                count++;
                return 0;
            }
            else{
                p=p->next;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
    int count=0;
    count=display(first,count);
    insert(first,0,5,count);
    display(first,count);
    return 0;
}