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
int length(node* head){
    int len= 0;
    while(head!=nullptr){
        head= head->next;
        len++;
    }
    return len;
}
void insertHead(node* &head, int data){
    node* n= new node(data);
    n->next= head;
    head= n;
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
void insertinmid(int data, int position, node* &head){
    node* temp= head;
        if(head==nullptr||position== 0){
        insertHead(head, data);
    }
    else if(position> length(temp)){
        insertTail(head, data);
    }
    else{
        int i= 1;
        node* temp= head;
        while(i<= position-1){
            temp= temp->next;
            i++;
        }
        node* n= new node(data);
        n->next= temp->next;
        temp->next= n;
    }
}

void print(node* head){
    while(head!= nullptr){
        cout<<head->data<<endl;
        head= head->next;
    }
}
void deletehead(node* &head){
    if(head==nullptr){
        return;
    }
    node* temp= head;
    head= head->next;
    delete temp;
}
void deletetail(node* &head){
    node* prev;
    node* temp= head;
    while(temp->next!=nullptr){
        prev= temp;
        temp= temp->next;
    }
    delete temp;
    prev->next= nullptr;
}
void deletemid(node* &head, int position){
    node* temp= head;
    if(position>= length(temp)){
        deletetail(head);
    }
    else if(position== 0){
        deletehead(head);
    }
    else if(head==nullptr){
        return;
    }
    else{
        int i= 0;
        node* temp= head;
        node* prev= nullptr;
        while(i< position){
            prev= temp;
            temp=temp->next;
            i++;
        }
        prev->next= temp->next;
        delete temp;

    }
}

int recursivesearch(node* &head, int data,int position= 0){
    node* temp= head;
    if(temp->data== data){
        return position;
    }
    else if(head==nullptr){
        return -1;
    }
    else if(temp->next!= nullptr){
        position+=1;
        return recursivesearch(temp->next, data, position);
    }
    return -1;
}

int itersearch(node* &head, int data){
    node* temp= head;
    int position= 0;
    while(temp!=nullptr){
        if(temp->data== data){
            return position;
        }
        temp=temp->next;
        position++;
    }
    return -1;
}
int main(){
    node* head= nullptr;
    insertHead(head, 1);
    insertHead(head, 2);
    insertHead(head, 3);
    insertHead(head, 4);
    insertHead(head, 5);
    insertHead(head, 6);
    print(head);
    cout<<"enter digit to search"<<endl;
    int tosearch;
    cin>>tosearch;
    cout<<"Through iter search found at:"<<itersearch(head, tosearch)<<endl;
    return 0;
}