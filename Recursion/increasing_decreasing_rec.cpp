#include<stack>
#include<iostream>

using namespace std;

void increase(int n){
    if(n==0){
        cout<<n<<endl;
        return ;
    }
    increase(n-1);
    cout<<n<<endl;
    
}

void decrease(int n){
    if(n==0){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    decrease(n-1);
}
int main(){
    increase(4);
}