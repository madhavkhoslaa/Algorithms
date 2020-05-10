#include <iostream>

using namespace std;

int search(int* a, int n, int len, int key)
{
    if(n== 0){
        cout<<"List exhausted element Not found"<<endl;
        return -1;
    }
    else{
        if(a[0]== key){
            cout<<"Element found at index: "<<len- n;
            return -1;
        }
        else{
             return search(a+ 1, n- 1, len, key);
        }
       
    }
    return -1;
}
int main(){
    int Length, key;
    cout<<"Enter Length of array: "<<endl;
    cin>>Length;
    int a[Length];
    for(int i= 0; i< Length; i++){
        cin>>a[i];
    }
    cout<<"Enter the number to search"<<endl;
    cin>>key;
    search(a, Length, Length, key);
    return 0;
}