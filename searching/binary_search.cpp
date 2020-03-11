#include <iostream>
using namespace std ;

int main(){
    int SIZE, SEARCH;
    cout<<"Enter Array Size"<<endl;;
    cin>>SIZE;
    int a[SIZE];
    cout<<"Enter Array Elements (Sorted)"<<endl;
    for(int i= 0; i<SIZE; i++){
        cin>>a[i];
    }
    cout<<"Enter the number to search"<<endl;
    cin>>SEARCH;
    int lower_limit= 0, pos;
    int upper_limit= sizeof(a)/sizeof(a[0])-1;
    while(upper_limit>= lower_limit){
        int mid= lower_limit + (upper_limit- lower_limit)/2;
        if(SEARCH== a[mid]){
            pos= mid;
            break;
        }
        if(SEARCH< a[mid]){
            upper_limit= mid;
            mid= lower_limit+ mid;
        }
        if(SEARCH> a[mid]){
            lower_limit= mid;
            mid= upper_limit+ lower_limit;
        }
    }
    cout<<"Element "<<SEARCH<<" found at position "<<pos<<endl;
    return 0;
}