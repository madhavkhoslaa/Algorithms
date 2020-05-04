#include <iostream>

using namespace std;

int mul(int a, int b){
    //a* b= b* a
    //We do this to reduce the call stack
    if(b> a){
        return mul(b, a);
    }
    else if(b!= 0){
        return a+ mul(a, b-1);
    }
    else{
        return 0;
    }
}

int main(){
    int x= mul(2, 3);
    cout<<x;
}