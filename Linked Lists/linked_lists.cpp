#include<bits/stdc++.h>

class Node {
    public:
        int data;
        Node* next;

    Node(int n){
        this -> data = n;
        this -> next = nullptr;
    }
    
    void insertFront(Node ** headRef, int newData){
        Node* newNode = new Node(newData);
        newNode -> next = (*headRef);
        (*headRef) = newNode;
    }
};

using namespace std;

int main(){

    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node(1);
    second = new Node(2);
    third = new Node(3);

    head -> next = second;
    second -> next = third;

    return 0;
}