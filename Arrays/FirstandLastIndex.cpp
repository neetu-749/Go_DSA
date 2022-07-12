#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start=mid+1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int odd[5]={1,2,3,3,5};
    cout<<"first and last occurance of 3 are "<<firstOccurance(odd,5,3)<<" and "<<lastOccurance(odd,5,3)<<" respectively."<<endl;

    
}

/*
Sample Output:
first and last occurance of 3 are 2 and 3 respectively.
*/