// Factorial of n
// Neetu Kumari

 #include <iostream>
 using namespace std;

 int f(int n){
    if(n==0 || n==1)
    return 1;
    
    return n*f(n-1);
 }
 int main(){
    int n;
    cout<<"enter the num:";
    cin>>n;
    cout<<f(n)<<endl;
 }
 
 // Time complexity: O(n)
 // space complexity: O(n)
