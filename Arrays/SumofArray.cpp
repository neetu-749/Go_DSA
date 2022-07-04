#include <iostream>
using namespace std;

int findSum(int arr[], int n){
    int sum=0; 
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
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

    cout<<"Sum of elements of the array is: "<< findSum(arr,size)<<endl;
}

/*

Sample output:

1. enter the size of array: 6
   Enter the array elements: 1 2 3 4 5 6
   Maximum element of array is: 21

2. enter the size of array: 3 
   Enter the array elements: -1 -2 -2
   Sum of elements of the array is: -5

3. enter the size of array: 4
   Enter the array elements: -1 0 1 2
   Sum of elements of the array is: 2

4. enter the size of array: 4     
   Enter the array elements: -1 50 100 0
   Sum of elements of the array is: 149

*/
