//find all the subsequences of given array
//Neetu Kumari

#include <bits/stdc++.h>
using namespace std;

void f(int i, vector<int> &ds, int arr[], int n){
    if(i==n){
        for(auto it:ds){
            cout<< it<<" ";
        }if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // take or pick any particular index into the subsequence
    ds.push_back(arr[i]);
    f(i+1,ds,arr,n);
    ds.pop_back();
    // not pick, or not take condition, this element is not added to the subsequence
    f(i+1,ds,arr,n);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    vector<int>ds;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,ds,arr,n);
}
