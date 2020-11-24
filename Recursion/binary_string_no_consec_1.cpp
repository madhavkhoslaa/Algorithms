#include<stack>
#include<iostream>

using namespace std;

int waysstring(int n){
    if(n==0){
        return 1; 
    }
    if(n<0){
        return 0;
    }
    if(n==1){
        return 2;
    }
    return waysstring(n-1) + waysstring(n-2);
}


int main(){
    int n;
    cin>>n;
    cout<<waysstring(n)<<endl;
}