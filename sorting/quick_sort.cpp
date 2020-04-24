#include <iostream>
using namespace std;
int partition(int* a, int start, int end){
    int i= start-1;
    int j= start;
    int pivot= a[end];
    while(j<= end-1){
        if(a[j]< pivot){
            i+=1;
            swap(a[i], a[j]);
        }
        j= j+ 1;
    }
    swap(a[i+1], a[j]);
    return i+ 1;
}
void quicksort(int* a, int start, int end){
    if(start<= end){
        int p= partition(a, start, end);
        quicksort(a, start, p-1);
        quicksort(a, p+1, end);
    }
    else{
        return;
    }

}
int main(){
    int n;
    cout<<"Enter Length of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i= 0; i< n; i++){
        cin>>a[i];
    }
    quicksort(a, 0, n-1);
    for(int i= 0; i< n; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}