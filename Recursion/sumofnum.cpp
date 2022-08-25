// Sum of first n numbers
// Neetu Kumari

// Parameter based:
 #include<iostream>
 using namespace std;

 void sumofnum(int i,int sum){
        if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumofnum(i-1,sum+i);
 }
 int main(){
    int n;
    cin>>n;
    sumofnum(n,0);
 }
// recursion tree: f(3,0) <=> f(2,3) <=> f(1,5) <=> f(0,6)

// Fumctional based:
// eg. if n=3;
//     f(3)=3+f(2);
//     f(2)=2+f(1);

 #include <iostream>
 using namespace std;

 int f(int n){
    if(n==0)
    return 1;
    
    return n*f(n-1);
 }
 int main(){
    int n;
    cout<<"enter the num:";
    cin>>n;
    cout<<f(n)<<endl;
 }
