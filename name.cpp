//program to print any name n times
 #include<iostream>
 using namespace std;

 void name(int i,int n){
    if(i>n)
    return;
    cout<<"Neetu"<<endl;
    name(i+1,n);
 }
 int main(){
    int n;
    cin>>n;
    name(1,n);
 }