//Fibonacci numbers: 0 1 1 2 3 4 8 13 21 34 ...
// find the nth fibonacci num
// f(3)=2, f(4)=3
// f(n)=f(n-1)+f(n-2)
// when there are multiple function calls, they are called according to the manner they are written
// Neetu Kumari

 #include <iostream>
 using namespace std;

 int f(int n){
    if(n<=1)
    return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
 }
 int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<f(n)<<endl;
 }
/*for f(4) we made 9 recursion calls
 4 will be called : 1 call
 4 will call 3 and 2 : 2 calls
 3 will call 2 & 1 and 2 will call 1 & 0 : 4 calls
 2 will call 1 and 0 : 2 calls
 =>total calls: 9

time complexity is about (2^n) i.e exponential in nature.
*/
