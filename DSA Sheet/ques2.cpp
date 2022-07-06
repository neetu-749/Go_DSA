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
    int arr[6]={1,2,3,5000,-7,0};

    cout<<"Maximum element of array is: "<< MaxOfArray(arr,6)<<endl;
    cout<<"Minimum element of array is: "<< MinOfArray(arr,6)<<endl;
}


/*
Sample output:

Maximum element of array is: 5000
Minimum element of array is: -7

*/
