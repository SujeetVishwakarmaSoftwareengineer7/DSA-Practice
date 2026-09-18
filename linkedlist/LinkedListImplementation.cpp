#include<iostream>
using namespace std;


class node{
    public:
   int data;
   node* next;

   node(int val){
      data = val;
      next = NULL;
   }
};


    
class list{
    node* head;
    node*tail;

    public:
    list(){
        head = tail = NULL;
    } 

    void push_front(int val){
        node*newnode = new node(val);
    if(head == NULL){
        head = tail = newnode;
        return;
    }else{
        newnode->next = head;
        head =  newnode;
    }

    }
    void push_back(int val){
        node* newnode= new node(val);
        if(head == NULL){
            head = tail = newnode;


        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void popfront(){
        if(head == NULL){
            cout<<"link list is empty\n";\
            return;
        }
        node*temp = head;
        head = head->next;
        temp-> next = NULL;
        delete temp;
    }
    void popback(){
        if(head == NULL){
            cout<<"ll is empty\n";
            return;
        }
        node*temp = head;
        while(temp->next != tail){
            temp = temp ->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos){
        if(pos < 0){
            cout<<" invalid positio\n";
            return;

        }
        if(pos == 0){
            push_front(val);
            return;

        }
        node* temp = head;
        for(int i =0; i, pos-1; i++){
            if(temp == NULL){
                cout<<"invalid pos\n";
                return;
            }
            temp = temp-> next;
        }
        node*newnode = new node(val);
        newnode-> next = temp-> next;
        temp->next = newnode;
    }

    void printlist(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp ->data <<"->";
            temp = temp ->next;
        }
        cout<<"null"<<endl;
    }
    int search(int key){
        node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp-> data == key){
                return idx;
            }
            temp = temp ->next;
            idx++;
        }
        return -1;
    }
};



int main(){
    list l1;

    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
   
   l1.insert(4,1);
    
 
l1.printlist();
 cout<< l1.search(5)<<endl;
return 0;
}