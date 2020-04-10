#include <iostream>
using namespace std;
void merge(int* a, int start, int end){
    int mid= (start+ end)/ 2;
    int i= start;
    int k= start;
    int j= mid+ 1;
    int temp[200];
    while(i<= mid && j<= end){
        if(a[i]>= a[j]){
            temp[k++]= a[j++];
        }
        if(a[i]<= a[j]){
            temp[k++]= a[i++];
        }
    }
    while(i<= mid){
        temp[k++]= a[i++];
    }
    while(j<= end){
        temp[k++]= a[j++];
    }
    for(int i= start; i<= end; i++){
        a[i]= temp[i];
    }
}
void mergesort(int a[], int start, int end){
    if(start< end){
        int mid= (start+ end)/2;
        mergesort(a, start, mid);
        mergesort(a, mid+ 1, end);
        merge(a, start, end);
    }
}
int main() {
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter Array elements "<<endl;
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    mergesort(a, 0, n- 1);
    for(int i= 0; i<n; i++){
        cout<<a[i]<<",";
    }
    return 0;

}
