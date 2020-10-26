#include<stack>
#include<iostream>

using namespace std;

int first_occourance(int arr[], int len, int counter, int key){
    if(counter==len){
        return -1;
    }
    else
    {
        if(arr[counter]==key){
            return counter;
        }
        else{
            return first_occourance(arr, len, counter+1, key);
        }
    }
    
}
int main(){
    int a[7] = {1,2,3,4,5,6,7};
    cout<<first_occourance(a, 7, 0, 1);
}