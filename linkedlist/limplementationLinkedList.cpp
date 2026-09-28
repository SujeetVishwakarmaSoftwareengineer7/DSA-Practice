#include<iostream>
using namespace std;

class node { 
    public:
    int data;
    node* next;



    //constructor of linked list
    node( int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~node(){
        int value = this -> data;
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<" memory is free for node with data "<< value <<endl;
    }
};

void insertathead( node* &head, int data){

   // new node creation
   node* temp = new node(data);
   temp -> next = head;
   head = temp;
}

void insertattail(node* &tail, int data){
    //create a new node
      node* temp =  new node(data);
      tail -> next = temp;
      tail = tail -> next;
}
 

// traverse on a linked list
void  print( node* &head){
    node* temp = head;
    while( temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertatposition(node* &head , int position, int data){
    if(position == 1){
        insertathead(head , data);
        return;
    }
     node* temp = head;
     int count = 1;
     while ( count < position -1 ){
        temp = temp -> next;
        count++;
     }

     //creating a node for data;
     node* nodetoinsert = new node(data);
     nodetoinsert -> next = temp -> next;
     temp -> next = nodetoinsert;

}

void deletenode( int position , node* &head){
    // deleitng first node
     if( position == 1){
        node* temp = head;
        // head ko next par le aao phir oska connection toot jaega
       head = head -> next;
       // memory free start ki  delete the temp node
       temp -> next = NULL;
       delete(temp);
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
        delete(curr);
     }
}
 
int main(){
   
    node* node1 = new node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next<<endl;

// head pointed to node1
    node* head = node1;
    node* tail = node1;
    print(head);

    insertattail(tail, 12);
    print(head);
    
     insertattail(tail, 15);
     print(head);

    insertatposition(head, 1, 22);
    print(head);
   

    delete(2,head);
    print(head);
     return 0;
}
