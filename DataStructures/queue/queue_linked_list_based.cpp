#include <iostream>
#include <list>

using namespace std;
class Queue{
    list<int> q;
    int current_size;
    public:
    Queue(int default_size= 10){
        this->current_size= 0;
    }
    bool isempty(){
        return this->current_size== 0;
    }

    void enqueue(int data){
        this->q.push_back(data);
        this->current_size++;
    }
    void dequeue(){
        if(!isempty()){
            this->current_size--;
            this->q.pop_front();
        }

    }
    int getfront(){
            return this->q.front();
    }

};

int main(){
    Queue a_queue(10);
    for(int i= 0; i<10; i++){
        a_queue.enqueue(i);
    }
    for(int i= 0; i<10; i++){
        int f= a_queue.getfront();
        cout<<"front= "<<f<<endl;
        a_queue.dequeue();
        cout<<"Dequeued this queue"<<endl;;
    }
    bool x= a_queue.isempty();
    cout<<"Queue empty: "<<x<<endl;
    return 0;
}