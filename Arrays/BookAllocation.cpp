/*
Problem Statement:
Given an array ‘pages’ of integer numbers, where ‘pages[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students, and the task is to allocate all the books to their students. 
Allocate books in a way such that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the books to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
*/

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n, int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+ arr[i]<=mid){
            pagesum+=arr[i];
        }else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];

        }
    }
    return true;
}

int allocate(int arr[],int n, int m){
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n=4,m=2;
    int arr[4]={10,20,30,40};
    cout<<"The minimum value of the maximum number of pages in book allocation is: "<<allocate(arr,n,m)<<endl;
}

/*
Sample output:
The minimum value of the maximum number of pages in book allocation is: 60
*/


