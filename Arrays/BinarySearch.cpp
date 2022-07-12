#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[7]={1,2,3,4,5,6,7};

    int evenIndex = BinarySearch(even,6,4);
    cout<<"Index of 4 is: "<< evenIndex<<endl;

    int oddIndex = BinarySearch(odd,7,10);
    cout<<"Index of 10 is: "<< oddIndex<<endl;
}

/*
Sample Output:
Index of 4 is: 3
Index of 10 is: -1
*/