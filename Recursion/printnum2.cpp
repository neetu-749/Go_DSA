//  Print linearly from 1 to N ( but not by backtracking)
// we cannot use f(i+1,n)
// Neetu Kumari

#include<iostream>
 using namespace std;

 void name(int i,int n){
    if(i<1)
    return;
    name(i-1,n);
    cout<<i<<endl;
 }
 int main(){
    int n;
    cin>>n;
    name(n,n);
 }
