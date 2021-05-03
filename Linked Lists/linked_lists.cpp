#include<bits/stdc++.h>

class Node {
    public:
        int value;
        Node* next;

    Node(int n){
        this -> value = n;
        this -> next = nullptr;
    }
};

void insertFront(Node** head, int value){
    Node* newNode = new Node(value);
    newNode -> next = *head;
    *head = newNode;
}

void insertBack(Node** head, int value){
    
    Node* newNode = new Node(value);
    Node* cur = *head;

    while(cur -> next != nullptr){
        cur = cur -> next;
    }
    
    cur -> next = newNode;

}

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

    insertBack(&head, 50);
    
    Node* cur = head;
    
    while(cur!= nullptr){
        
        cout << cur -> value << " ";
        
        cur = cur -> next;
    }

    return 0;
}