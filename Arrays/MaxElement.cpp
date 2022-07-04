#include <iostream>
#include <climits>
using namespace std;

int MaxOfArray(int arr[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
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

    cout<<"Maximum element of array is: "<< MaxOfArray(arr,size)<<endl;
}

/*

Sample output:
enter the size of array: 6
Enter the array elements: 1 2 3 4 5 6
Maximum element of array is: 6

*/
