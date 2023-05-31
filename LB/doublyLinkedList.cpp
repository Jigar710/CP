#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        if(this->prev != NULL || this->next != NULL){
            delete next;
            delete prev;
            this->prev = NULL;
            this->next = NULL;
        }
    }
};
void printFromFront(Node* &head){
    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<< temp -> data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* &head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}
void printFromBack(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    tail = temp;
}
void insertFromFront(Node* &head, int d, int position){
    int cnt = 1;
    Node* t = head;
    while(cnt<position-1){
        cnt++;
        t = t->next;
    }
    Node* temp = new Node(d);
    temp->prev = t;
    temp->next = t->next;
    t->next->prev = temp;
    t->next = temp;
}
void insertFromBack(Node* &tail, int d, int position){
    int cnt = 1;
    Node* t = tail;
    while(cnt<position-1){
        cnt++;
        t = t->prev;
    }
    Node* temp = new Node(d);
    temp->next = t;
    temp->prev = t->prev;
    t->prev->next = temp;
    t->prev = temp;
}
void deleteFromFront(Node* &head,int position){
    Node* t = head;
    int cnt = 1;
    while(cnt<position-1){
        cnt++;
        t = t->next;
    }
    Node* temp = t->next;
    t->next = temp->next;
    temp->next->prev = t;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}
void deleteFromBack(Node* &tail,int position){
    Node* t = tail;
    int cnt = 1;
    while(cnt<position-1){
        cnt++;
        t = t->prev;
    }
    Node* temp = t->prev;
    t->prev = temp->prev;
    temp->prev->next = t;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}
int main()
{
    Node* node1 =new Node(30);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertFromFront(head,25,3);
    insertFromFront(head,27,4);
    insertFromBack(tail,45,2);
    insertFromBack(tail,42,3);
    deleteFromFront(head,4);
    deleteFromBack(tail,3);
    printFromFront(head);
    printFromBack(tail);
    int len = getLength(head);
    cout<<"Length is "<<len<<endl;
    return 0;
}
