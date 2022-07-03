#include<iostream>
using namespace std;

//creating a Node class
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    //creating a new Node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    
    return 0;
}

/* 
Output:
10
0
Here 10 is Node data and the next Node will be NULL i.e 0.
*/
