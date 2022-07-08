#include<iostream>
using namespace std;

void swapAlter(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        } 
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr1[6]={1,2,3,4,5,6};
    int arr2[7]={11,12,13,14,15,16,17};

    swapAlternate(arr1, 6) ;
    printArray(arr1, 6);

    swapAlternate(arr2, 7) ;
    printArray(arr2, 7);
}

/*
sample output:
2 1 4 3 6 5 
12 11 14 13 16 15 17

*/
