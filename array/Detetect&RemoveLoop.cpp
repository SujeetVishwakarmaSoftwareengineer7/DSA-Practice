#include<iostream>
#include<map>
using namespace std;
 
int main(){

    map<node* , bool> visited;

     node* temp = head;
     while( temp != NUll){
        if( visited[temp] == true){
            cout<<" lopp is detect "<<endl;
            return true;
            else{
                visited[temp] = true;
            }
        }
     }
    }