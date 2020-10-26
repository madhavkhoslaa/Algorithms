#include <iostream>
#include<stack>
using namespace std;

void allOcc(int arr[], int len, int key){
    if(len==-1){
        return ;
    }
    else{
    if(arr[len]==key){
        cout<<"found at index: "<<len<<endl;
    }
    return allOcc(arr, len-1, key);
    }
}
void storeallOcc(int arr[], int len, int key, stack<int> *idx){
    if(len==-1){
        return ;
    }
    else{
        if(arr[len]==key){
        idx->push(len);
    }
        return storeallOcc(arr, len-1, key, idx);
    }
}
int main(){
    int arr[5] = {1,2,3,2,5};
    stack<int> idx[100];
    allOcc(arr, 5, 2);
    storeallOcc(arr, 5, 2, idx);
    return 0;
}