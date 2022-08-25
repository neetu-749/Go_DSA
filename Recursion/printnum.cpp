// c++ program to print numbers from 1 to n
// Neetu Kumari

 #include<iostream>
 using namespace std;

 void printnum(int i,int n){
    if(i>n)
    return;
    cout<<i<<endl;
    printnum(i-1,n);
 }
 int main(){
    int n;
    cin>>n;
    printnum(1,n);
 }
