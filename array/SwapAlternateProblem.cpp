#include<iostream>
using namespace std;

void printarray(int arr[], int n){
for (int i=0; i<n; i++){
    cout<<arr[i]<<endl;
}
}



void swapalternate(int arr[], int size){
    for(int i=0; i<size; i+=2){

        if(i+1<size){
            swap(arr[i],arr[i+1]);

        } 
    }
}



int main(){
    int arr[5]= {1,4,6,4,5};

   

 swapalternate(arr,5);
 printarray(arr,5);

 return 0;
}