#include <iostream>

using namespace std;

int LastOccourance(int arr[], int len, int counter, int key){
    if(counter==-1){
        return -1;
    }
    else{
        if(arr[counter]==key){
            return counter;
        }
        else{
            return LastOccourance(arr, len, counter-1, key);
        }
    }
}
int LastOcc(int arr[], int len, int key){
    if(len==-1){
        return -1;
    }
    else{
        if(arr[len]==key){
            return len;
        }
        else
        {
            return LastOcc(arr, len-1, key);
        }
        
    }
}
int main(){
    int arr[5] = {1,2,4,7,4};
    int key = 2;
    int counter = 5;
    int len = 5;
    cout<<LastOccourance(arr, len, counter, key)<<endl;
    cout<<LastOcc(arr, len, key)<<endl;

}