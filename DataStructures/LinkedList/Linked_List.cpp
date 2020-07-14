#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data_){
        data= data_;
        next= nullptr;

    }
};

void insertHead(node* &head, int data){
    node* n= new node(data);
    n->next= head;
    head= n;
}
void insertinmid(int data, int position, node* &head){
    if(head==nullptr||position== 0){
        insertHead(head, data);
    }
    else if(position> length(head)){
        insertTail(head, data)
    }
    int i= 1;
    node* temp= head;
    while(i< position- 1){
        temp= temp->next;
        i++;
    }
    node* n= new node(data);
    n->next= temp->next;
    temp->next= n;
}
void insertTail(node* &head, int data){
    node* temp= head;
    while(temp->next!=nullptr){
        temp= temp->next;
    }
    node* n= new node(data);
    temp->next= n;
    n->next= nullptr;
}
void print(node* head){
    while(head!= nullptr){
        cout<<head->data<<endl;
        head= head->next;
    }
}
int length(node* &head){
    int len= 0;
    while(head!=nullptr){
        head= head->next;
        len++;
    }
    return len;
}
int main(){
    node* head= nullptr;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 20);
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 20);
    insertTail(head, 69);
    insertHead(head, 41);
        insertinmid(1227, 2, head);
    print(head);
    cout<<length(head);
    return 0;
}