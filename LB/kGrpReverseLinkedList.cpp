#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};
void insert(Node* &tail, int val){
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd;
    while(curr!=NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    head = prev;
}
void reverseByRecursion(Node* &head, Node* &prev, Node* &curr,Node* &fwd){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    fwd = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fwd;
    reverseByRecursion(head,prev,curr,fwd);
}
Node* kgroupreverse(Node* head,int k){
    if(head == NULL)
        return NULL;
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    int cnt = 0;
    while(curr != NULL && cnt < k){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        cnt++;
     }
     if(fwd != NULL){
        head->next = kgroupreverse(fwd,k);
     }
    return prev;
}
void middleLinkedlist(Node* &head)
{
    int cnt =0;
    int cnt2=1;
    Node* temp = head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    int middle;
    if(cnt%2==0)
    {
        middle=cnt/2;

    }
    else{
         middle = (cnt/2)+1;
    }
    temp=head;
    while(cnt2<middle)
    {
        cnt2++;
        temp=temp->next;
    }
    cout<<"data of middle element "<<temp->value<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    insert(tail,50);
    insert(tail,60);
    print(head);
    // reverse(head);
    // reverseByRecursion(head,prev,curr,fwd);
    head = kgroupreverse(head,2);
    print(head);
    // middleLinkedlist(head);
    return 0;
}
