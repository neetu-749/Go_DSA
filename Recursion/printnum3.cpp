//Print from n to 1 by backtracking
// don't use f(i-1,n)
// Neetu Kumari

#include<iostream>
 using namespace std;

 void name(int i,int n){
    if(i>n)
    return;
    name(i+1,n);
    cout<<i<<endl;
 }
 int main(){
    int n;
    cin>>n;
    name(1,n);
 }
