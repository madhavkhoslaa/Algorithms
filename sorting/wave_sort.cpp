#include <iostream>
using namespace std;
void wave_sort(int a[], int len){
    for(int i= 0; i<len; i=i+2){
        if(i>0 && a[i-1]< a[i]){
            swap(a[i], a[i-1]);
        }
        if(i<=len-2 && a[i+1] < a[i]){
            swap(a[i], a[i+1]);
        }
    }
    cout<<"Wave Sorted Array: "<<endl;
    for(int i=0; i<len; i++){
        cout<<a[i]<<",";
    }
}
int main(){
    int SIZE;
    cout<<"Enter the size of array: "<<endl; 
    cin>>SIZE;
    int a[SIZE];
    cout<<"Enter the array: "<<endl;
    for(int i= 0; i<SIZE; i++){
        cin>>a[i];
    }
    wave_sort(a, SIZE);
    return 0;
}