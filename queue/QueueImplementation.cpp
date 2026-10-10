#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);
    cout<< "front element is :"<< q.front() <<endl;

    cout<<" size of queue is : "<<q.size()<<endl;


    q.pop();
    cout<<" size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<" queue is empty "<<endl;

    }else{
        cout<<" queue is not empty "<<endl;
    }

}