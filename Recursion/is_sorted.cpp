#include<stack>
#include<iostream>

using namespace std;

bool is_sorted(int arr[],int  n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]<arr[1] && is_sorted(arr+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    int a[5] = {1,2,3,4,5};
    cout<<is_sorted(a, 5);
}