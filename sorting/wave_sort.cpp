#include <iostream>
using namespace std;
void wave_sort(int a[], int len){
    for(int i= 0; i<len-1; i=i+2){
        if(i>0 && a[i]>a[i+1]){
            swap(a[i], a[i+1]);
        }
        if(i>len-1 && a[i]>a[i+1]){
            swap(a[len], a[len-1]);
        }
        cout<<"lel";
    for(int i= 0; i<len; i++){
        cout<<a[i]<<endl;
    }
}}
int main(){
    int SIZE;
    cout<<"Enter the size of array: "<<endl; 
    cin>>SIZE;
    int a[SIZE];
    for(int i= 0; i<SIZE; i++){
        cin>>a[i];
    }
    wave_sort(a, SIZE);
    return 0;
}