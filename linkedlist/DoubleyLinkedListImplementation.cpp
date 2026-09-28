#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~node(){
        int val = this -> data;
        if(next != next){
            delete next;
            next = NULL;

        }
        cout<<" memeory free "<<endl;

    }
};
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//gives the length of linked list 
int getlength(node* head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
    len++;
    temp = temp -> next;
}
return len;
}
void  insertathead( node* &tail, node* &head, int d){
    //empty list case
    if( head == NULL){
    node* temp = new node(d);
    head = temp;
    tail = temp;
    }
    else{
        node* temp = new node(d); 
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}
void insertattail( node* &head, node* &tail , int d){
    cout <<" tail" << tail <<endl;
    if(tail == NULL){
         node* temp = new node(d);
         tail = temp;
         head = temp;
    }
    else{
        node* temp = new node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void insertatposition( node* &tail, node* &head, int position, int d){
    //insert at position
    if(position == 1){
        insertathead(tail, head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while( cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last position
    if( temp -> next == NULL){
        insertattail(tail,head, d);
        return;
    }
    //creating a node for d
    node* nodetoinsert = new node(d);

     nodetoinsert -> next = temp -> next;
     temp -> next -> prev = nodetoinsert;
     temp -> next = nodetoinsert;
     nodetoinsert ->prev = temp;
}


void deletenode( int position , node* &head){

    // deleitng first node
    if( position == 1){
    node* temp = head;

    // head ko next par le aao phir oska connection toot jaega
    head = head -> next;

    // memory free start ki  delete the temp node
    temp -> next = NULL;
    delete temp;
    }
    
    else{
     //deliting any niddle node or last node
    node* curr = head;
    node* prev = NULL;

    int cnt =1;
    while(cnt < position){
    prev = curr;
    curr = curr -> next;
    cnt++;
}
    prev -> next = curr -> next;
    prev -> next =  NULL;
    delete curr;
    }
}


int main(){

node* head = NULL;
node* tail = NULL;

print(head);
// cout<< getlength(head)<<endl;

insertathead(tail, head,11);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail ->data <<endl;

insertathead(tail,head, 13);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail ->data <<endl;

insertathead(tail,head, 8);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail ->data <<endl;

insertattail(tail, head, 25);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail ->data <<endl;

insertatposition(tail, head, 2, 100);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail ->data <<endl;

insertatposition(tail, head, 1, 101);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail -> data <<endl;

insertatposition(tail, head, 7, 102);
print(head);

cout<< "head " << head -> data <<endl;
cout<< "tail " << tail -> data <<endl;


return 0;
}