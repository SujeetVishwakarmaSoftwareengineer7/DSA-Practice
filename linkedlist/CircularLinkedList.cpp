#include<iostream>
using namespace std;

class node {
public:
int data;
node* next;

node(int data){
    this -> data = data;
    this ->next = NULL;
}
~node(){
    int value = this -> data;
    if( this -> next != NULL){
        delete next;
        next = NULL;
    }
    cout<<" memory is free for node with data "<< value << endl;
}
};

void insertnode( node* &tail , int element , int d){
     // assuming that the leemnt in presnt in the list

     if( tail == NULL){
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
     }
     else{
        // non empty list 
        //ssumimg that the element is prent in the list

        node* curr = tail;
        while ( curr -> data != element){
            curr = curr -> next;
        }
        // element found -> curr is representing  element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
     }
}
void print(node* tail){

    //empty list
    if( tail == NULL){
        cout<<" list is empty"<<endl;
        return;
    }
    node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
     }while ( tail != temp);
     cout<< endl;
}

void deletenode( node* &tail , int value){
     // case 1 empty list
     if( tail == NULL){
        cout<< " list is empty , please chek again" <<endl;
        return;
    }
 else{
        // non empty case
        // assuming that "value " is present in the linked lsit 
    node* prev = tail;
    node* curr = prev -> next;

    while(curr -> data != value){
    prev = curr;
    curr = curr -> next;
    }
    prev -> next = curr -> next;

    // 1node linked list
    if( curr == prev){
        tail = NULL;
    }

    // >=2 node linked lsit
    else if( tail == curr ){
        tail = prev;
    }

    if( tail == curr){
        tail  = prev;
    }
    curr -> next = NULL;
    delete curr;
    }
}
int  main (){

    node* tail = NULL;

    // empty list me insert kr rhe hai
    insertnode(tail, 5, 3);
    print(tail);

    insertnode( tail , 3, 5);
    print(tail);
/*
    insertnode( tail , 5, 7);
    print(tail);

    insertnode( tail, 7, 9);
    print(tail);

    insertnode( tail, 5, 6);
    print(tail);

    insertnode( tail, 9,10);
    print(tail);

    insertnode( tail, 3, 4);
    print(tail); 
*/

    deletenode( tail, 5);
    print(tail);


return 0;
}