
#include <iostream>

using namespace std;

void recursive_bubble(int arr[], int n){
    if(n==0){
        return;
    }
    for(int i= 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    return recursive_bubble(arr, n-1);
}

int main(){
    int a[] = {1,5,2,4,3};
    recursive_bubble(a, 5);
    for(int i= 0; i<5; i++){
        cout<<a[i]<<" ";
    }
}