#include <iostream>
using namespace std;

class Queue{
    int* arr;
    int max_size;
    int current_size;
    int front;
    int rear;
    public:
        Queue(int defaut_size= 10){
            this->front= 0;
            this->rear= defaut_size- 1;
            this->max_size= defaut_size;
            this->arr = new int[this->max_size];
            this->current_size= 0;
        }
        bool isfull(){
            if(this->current_size== this->max_size){
                return 1;
            }
            else{
                return 0;
            }
        }
        bool isempty(){
            if(this->current_size== 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        void enqueue(int data){
            if(!isfull()){
                this->rear= (this->rear+ 1)%this->max_size;
                this->arr[this->rear]= data;
                this->current_size++;
            }
        }
        void dequeue(){
            if(!isempty()){
                this->front= (this->front+ 1)%this->max_size;
                this->current_size--;
            }

        }
        int getfront(){
            return this->arr[this->front];
        }
        int getrear(){
            return this->arr[this->rear];
        }

};

int main(){
    Queue a_queue(10);
    for(int i= 0; i<10; i++){
        a_queue.enqueue(i);
    }
    for(int i= 0; i<10; i++){
        int f= a_queue.getfront();
        int r= a_queue.getrear();
        cout<<"front= "<<f<<endl;
        cout<<"rear= "<<r<<endl;
        a_queue.dequeue();
        cout<<"Dequeued this queue"<<endl;;
    }
    bool x= a_queue.isempty();
    bool y= a_queue.isfull();
    cout<<"Queue empty: "<<x<<endl;
    cout<<"Queue full: "<<y<<endl;
    return 0;
}