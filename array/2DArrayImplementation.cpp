#include<iostream>
using namespace std;


bool ispresent(int arr[][4],   int target, int n , int m){
     for (int i=0; i<3; i++){
      for (int j=0; j<4; j++){
             if(arr[i][j]== target ){
                return 1;
             }
     }
   }
   return 0;
}

int main(){
 int i, j ;
    int arr[3][4];

    for (int i=0; i<3; i++){
        for (int j=0; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    // for (int i=0; i<4; i++){
    //   for (j=0; j<3 ; j++){
    //          cin>>arr[j][i];
    //   }
    // }

        // printing the array

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
    
        cout<<endl;
    }


int target;
    cout<<"enter the elemtn to search" ;
     
    cin>>target;

     if(ispresent(arr, target, 3, 4)){
        cout<<"element fount"<<endl;
     }
     else {
        cout<<"element not found";
     }
       return 0;
    }
