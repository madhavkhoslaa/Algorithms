#include<stack>
#include<iostream>

using namespace std;

float pow(int a, int n){
    if(n==0){
        return 1;
    }
    else{
        return a* pow(a, n-1);
    }
}

float mul(int a, int b){
    if(b==0 || b== 0){
        return 0;
    }
    if(b==1){
        return a;
    }
    else{
        return a + mul(a, b-1);
    }
}

int main(){
    cout<<mul(2,5);
}