#include <iostream>
#include <cstring>
using namespace std;

bool sorted(int* a, int n){
    if(n== 1){
        return true;
    }
    if(a[0]< a[1] && sorted(a+ 1, n-1)){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    int a[n];
    for(int i= 0; i< n; i++){
        cin>>a[i];
    }
    if(sorted(a, n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;

}