#include <iostream>
#include <cstring>

using namespace std;

void staircase(int arr[3][3], int x, int y, int search){
int i=0, j= y;
while(i<=x){
    if(search> arr[i][y]){
        i++;
    }
    if(search<arr[i][y]){
        while(j>=0){

            if(arr[i][j]== search){
                cout<<"Fount at index i: "<<i<<" and index j: "<<j<<endl;
                i=x+1;
                j= -1;
            }
            else{
                j--;
            }
        }

    }
}
}

int main(){
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    staircase(a, 2,2, 1);
    return 0;
}