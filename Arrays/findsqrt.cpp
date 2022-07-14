#include<iostream>
using namespace std;

int findSqrtInt(int n){
    int start=0;
    int end=n;
    
    long long int mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end){
        long long int sqrt=mid*mid;
        
        if(sqrt==n){
            return mid;
        }else if(sqrt<n){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}

double findPrecise(int n, int precision, int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"Number is:";
    cin>>n;
    int tempsol=findSqrtInt(n);
    cout<<"Integer answer is: "<<tempsol<<endl;
    cout<<"Precise answer is: "<<findPrecise(n,3,tempsol)<<endl;

}

/*
Sample output:
1. Number is:50
  Integer answer is: 7
  Precise answer is: 7.071

2. Number is:2
  Integer answer is: 1
  Precise answer is: 1.414
*/