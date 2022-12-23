#include<iostream>

using namespace std;
class Node{
public:
    int inf;
    int no;
    Node *next;
    Node *prev;

};
void del(Node *head,Node *num[],int siz,int loc){
    int prevloc=loc-1;
    int postloc=loc+1;
    Node *newnode;
    newnode=NULL;
    newnode=new Node();
    int val,nom;
    cout<<"Enter new nodes value and no: ";
    cin>>val;
    newnode->inf=val;
    newnode->no=0;


    if(loc==siz){
        num[loc]->next=newnode;
        newnode->prev=num[loc];
    }
    else if(loc==1){

      
        newnode->next=num[loc];
        num[loc]->prev=newnode;
          head=newnode;
    }
    else{
       newnode->next=num[loc];
      num[loc]->prev=newnode;
      newnode->prev=num[loc]->prev;
      num[loc]->prev ->next=newnode;
    }
    Node *h;
    h=head;
    while(h!=NULL){
        cout<<h->no<<endl;
        h=h->next;
    }
    
}
//if(loc<siz-1)
int main(){
    int i;
    Node *num[9];
    for(i=1;i<=5;i++){
        num[i]=NULL;
    }
    int k;
    for(i =1;i<=5;i++){
        cout<<"Enter the value of: "<<i<<" th node: ";
        cin>>k;
        num[i]=new Node();
        num[i]->inf=k;
        num[i]->no=i;
        if(i>1){
        num[i-1]->next=num[i];
        num[i]->prev=num[i-1];
        }
    }
    Node *head;
    head=NULL;
    head=new Node();
    head=num[1];
    int loc;
    int n=5;
    cout<<"Enter the node no: ";
    cin>>loc;
    del(head,num,n,loc);
   
}