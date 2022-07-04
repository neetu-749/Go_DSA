#include <iostream>
using namespace std;

bool ele_present(int arr[], int size, int element){
    
    for(int i=0;i<size;i++){
        if(arr[i]==element){
        return 1;
       }
    }
    return 0;
}


int main(){
    int arr[10]={1,2,3,4,5,0,-1,-2,-2,9};

    int element;
    cout<<"Enter the element to be searched :";
    cin>>element;

    bool found  = ele_present(arr, 10, element);
     if(found){
         cout<<"element is present in array!"<<endl;
     }else{
         cout<<"element is not present in array!"<<endl;
     }
}


/*
Sample output:

1. Enter the element to be searched :5
   element is present in array!

2.  Enter the element to be searched :6
   element is not present in array!

*/

