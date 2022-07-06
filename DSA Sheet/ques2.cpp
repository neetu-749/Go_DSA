#include <iostream>
#include <climits>
using namespace std;

int MaxOfArray(int arr[], int n){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

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
    int sizeOfArray;
    cout<<"enter the size of array: ";
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    cout<<"Enter the array elements: ";

    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }

    cout<<"Maximum element of array is: "<< MaxOfArray(arr,sizeOfArray)<<endl;
    cout<<"Minimum element of array is: "<< MinOfArray(arr,sizeOfArray)<<endl;
}


/*
Sample output:

enter the size of array: 5
Enter the array elements: 1 2 3 4 5
Maximum element of array is: 5
Minimum element of array is: 1

*/
