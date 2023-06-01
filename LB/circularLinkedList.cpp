#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL; 
        }
    }
};
void insert(Node* &tail,int element,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }else{
        Node* t = tail;
        while(t->data != element){
            t = t->next;
        }
        Node* temp = new Node(d);
        temp->next = t->next;
        t->next = temp;  
    }
}
void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != tail);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        
    }else{
        Node* curr = tail;
        while(curr->next->data !=value){
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

int main(){
    Node* tail = NULL;
    insert(tail,0,10);
    print(tail);
    insert(tail,10,20);
    insert(tail,20,30);
    insert(tail,20,25);
    print(tail);
    deleteNode(tail,25);
    print(tail);
    return 0;
}
