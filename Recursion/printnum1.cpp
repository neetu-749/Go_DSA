// Print from N to 1
// Neetu Kumari

 #include<iostream>
 using namespace std;

 void name(int i,int n){
    if(i<1)
    return;
    cout<<i<<endl;
    name(i-1,n);
 }
 int main(){
    int n;
    cin>>n;
    name(n,n);
 }
