// check if a string is pallindrom:
// Pallindrom: when a string is reverse it reads the same
// Neetu Kumari

#include <iostream>
using namespace std;

bool f(int i, string &s){
    if(i>=s.size()/2)
    return true;
    if(s[i] != s[s.size()-i-1])
    return false;
    return f(i+1,s);
}
int main(){
    string s="MADAM";
    cout<<f(0,s);
    return 0;
}
