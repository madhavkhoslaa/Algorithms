#include <iostream>
using namespace std;

int binarysearch(int a[], int start, int end, int search){
    while(start< end){
        int mid= (start+ end)/2;
        if(a[mid]> search){
            end= mid- 1;
        }
        if(a[mid]< search){
            start= mid+ 1;
        }
        if(a[mid]== search){
            return mid;
        }
    }
    return -1;
}
int bsearch_rotated(int a[], int n, int search){
    //Finding the pivot element
    int pivot;
    for(int i= 0; i< n-1; i++){
        if(a[i]< a[i+1]){
            pivot= i- 1;
            break;
        }
    }
    //If the element is greater than the first element then search in left array
    //else search in the right array
    if(search> a[0]){
        return binarysearch(a, 0, pivot -1 , search);
    }
    else{
        return binarysearch(a, pivot+ 1, n, search);
    }
    return -1;
}

int main(){
    int n, search;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i= 0; i< n; i++){
        cin>>a[i];
    }
    cout<<"Enter the element to search: ";
    cin>>search;
    int idx= bsearch_rotated(a, n, search);
    cout<<idx;
}
