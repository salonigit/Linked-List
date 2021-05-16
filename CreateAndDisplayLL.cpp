#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){

    int x[]={1,2,3,4,5,6,7,8,9};
    
    Node* last;
    Node* head=NULL;
    head=new Node();
    head->data=x[0];
    head->next= NULL;
    last=head;
   
    Node* t=NULL;
    for(int i=1;i<sizeof(x)/sizeof(x[0]);i++)
    {
        t=new Node();
        t->data=x[i];
        t->next= NULL;
        last->next=t;
        last=t;
    }
    
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }

    return 0;
}