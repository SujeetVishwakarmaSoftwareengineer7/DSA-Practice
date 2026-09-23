#include<iostream>
using namespace std;


void ReachHome(int src, int destination){
    cout<<" the src is "<< src <<" " << "the destination is" << destination << ""  <<endl;
    if( src == destination){
         cout<<" we are arrive in the  home"<<endl;
        return;
    } 
     // one step forward
        src++;
     
    // recursive call
    ReachHome(src, destination);
}


int main(){

int src = 1;
int destination = 10;
ReachHome(src, destination);
}
