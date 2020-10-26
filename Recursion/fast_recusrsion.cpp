#include <iostream>

using namespace std;

int pow(int a,int n){
    if(n==0){
        return 1;
    }
    return a * pow(a, n-1);
}

int fast_pow(int a, int n){
    if(n==0){
        return 1;
    }
    int subproblem =fast_pow(a, n/2);
    subproblem*=subproblem;
    if(n&1){
        return a*subproblem;
    }
    return subproblem;
}

int main(){
    cout<<pow(2,10)<<endl;
    cout<<fast_pow(2,10);
}