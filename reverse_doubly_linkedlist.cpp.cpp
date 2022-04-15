#include <iostream>

using namespace std;

struct node{
int data ;
node *next;
node *prev;
};
 node * Insert(struct node *head,int x)
{
struct node *temp=new (struct node);
temp->data=x;
if(!head)
{temp->next=NULL;
temp->prev=NULL;
head=temp;
return head;
}
else{
    node *t2=head;
        while(t2->next!=NULL)
        {
               t2=t2->next;
        }
        temp->prev=t2->next;
        temp->next=NULL;
        t2->next=temp;
}
return head;
}
void print(struct node *head)
{
    struct node * temp=head;
    while(temp)
    {

        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
node * Reverse(struct node *head)
{
    struct node *temp=NULL,*curr=head;
            while(curr!=NULL)
            {
        curr->prev=curr->next;
        curr->next=temp;
        temp=curr;
        curr=curr->prev;

          }
    head=temp;
    return head;

}
int main()
{
struct node * head=NULL;
head=Insert(head,5);
head=Insert(head,6);
head=Insert(head,7);
head=Insert(head,8);
head=Insert(head,9);
head=Insert(head,10);
head=Insert(head,11);
head=Insert(head,12);
print(head);
head=Reverse(head);
print(head);
return 0;
}
