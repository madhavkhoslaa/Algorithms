#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data_){
            data= data_;
            next= NULL;

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
    if(head==nullptr){
        insertHead(head, data);
    }
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
        while(i<position){
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
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
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
        node* temp= head->next;
        node* prev= head;
        while(i< position){
            prev= prev->next;
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
void input(node* &head){
    int data;
    cin>>data;
    while(data!=-1){
        cout<<data;
        insertTail(head, data);
        cin>>data;
    }
}
void reverse(node* &head){
    node* prev= nullptr;
    node* next;
    node* current= head;
    while(current!=nullptr){
        //Storing the next data of the head in next node
        next= current->next;
        //pointing the current node to previous node
        current->next= prev;
        //updating the previous pointer
        prev= current;
        //updating the current pointer
        current= next;
    }
    //pointing the head to the previous pointer
    head= prev;
}
void recursive(node* &head, node* previous, node* next, node* current){

}
node* midpoint(node* &head){
    node* fast= head->next;
    node* slow= head;
    while(fast!=nullptr && fast->next!=nullptr){
        fast= fast->next->next;
        slow= slow->next;
    }
    return slow;
}
node* kthnodefromend(node* head, int k){
    node* fast= head;
    node* slow= head;
    for(int i= 0; i<= k; i++){
        fast=fast->next;
    }
    while(fast!= nullptr){
        fast= fast->next;
        slow= slow-> next;
    }
    return slow;
    cout<<slow->data;
}
int main(){
    node* head= nullptr;
    input(head);
    cout<<"______________________-----------____________________"<<endl;
    node* temp= head;
    while(temp->next!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}
