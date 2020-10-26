#include<stack>
#include<iostream>

using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}
int fibo(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    cout<<fact(5)<<endl;
    cout<<fibo(5);
}