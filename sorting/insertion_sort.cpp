#include <iostream>
using namespace std;
void insertion_sort(int a[], int len){
    for(int i= 1; i<len; i++){
        int cmp= a[i];
        int j= i-1;
        while(j>= 0 && cmp<a[j]){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= cmp;
    }
    for(int i= 0; i<len; i++){
        cout<<a[i]<<",";
    }
}
int main(){
    int SIZE;
    cout<<"Enter size: "<<endl;
    cin>>SIZE;
    int a[SIZE];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i <SIZE; i++){
        cin>>a[i];
    }
    insertion_sort(a, SIZE);
    return 0;
}