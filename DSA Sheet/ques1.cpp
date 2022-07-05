#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[6]={1,2,3,4,5,6};

    reverse(arr1,5);
    reverse(arr2,6);

    printArray(arr1,5);
    printArray(arr2,6);
}

/* 
Output:
5 4 3 2 1   
6 5 4 3 2 1 
*/