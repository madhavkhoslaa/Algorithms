#include <iostream>
#include <cstring>
using namespace std;

int bubble(int* a, int n){
    if(n== 0){
        return -1;
    }
    else{
        for(int i= 0; i< n; i++){
            if(a[1]< a[0]){
                swap(a[1], a[0]);
            }
        }
    return bubble(a+ 1, n- 1);
    }
}
int main(){
    int a[]= {1,3,2,5,4};
    bubble(a, 5);
    for(int i= 0; i< 5; i++){
        cout<<a[i]<<",";
    }
}