#include <iostream>
#include <climits>
using namespace std;

int MinOfArray(int arr[], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Minimum element of array is: "<< MinOfArray(arr,size)<<endl;
}

/*

Sample output:

1. enter the size of array: 6
   Enter the array elements: 1 2 3 4 5 6
   Maximum element of array is: 1

2. enter the size of array: 5
   Enter the array elements: -1 0 2 50 -10
   Minimum element of array is: -10

*/
