#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
    Node(int val){
        value = val;
        next = NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL; 
        }
    }
};

void insertAtHead(int val,Node* &head){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(int val,Node* &tail){
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(int position,int val,Node* &head){
    int cnt = 1;
    Node* t = head;
    while(cnt < position-1){
        t = t->next;
        cnt++;
    }
    Node* temp = new Node(val);
    temp->next = t->next;
    t->next = temp;
}

void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        int cnt = 1;
        Node* curr = head;
        while(cnt < position-1){
            curr = curr->next;
            cnt++;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(30);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(20,head);
    print(head);
    insertAtHead(10,head);
    print(head);
    insertAtTail(40,tail);
    print(head);
    insertAtTail(50,tail);
    print(head);
    insertAtMiddle(3,25,head);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(5,head);
    print(head);
    deleteNode(2,head);
    print(head);
    return 0;
}
