#include <iostream>
#include <cstring>
using namespace std;

int power(int a, int b){
    if(b== 0){
        return 1;
    }
    else{
        return a* power(a, b-1);
    }
}

int fast_power(int a, int b){
    if(b== 0){
        return 1;
    }
    int smal_ans= fast_power(a, b/2);
    smal_ans*= smal_ans;
    if(b% 2 != 0){
        return a* smal_ans;
    }
    else{
        return smal_ans;
    }
    
}
int main(){
    int x= fast_power(3, 3);
    cout<<x;
}