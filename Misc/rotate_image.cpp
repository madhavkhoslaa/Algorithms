#include <iostream>
#include <cstring>
#define R 5 
#define C 5
using namespace std;

void rotate_img(int a[R][C]){
    for(int row= 0; row< R; row++){
        int start_col= 0;
        int end_col= C- 1;
        while(start_col< end_col){
            swap(a[row][start_col], a[row][end_col]);
            start_col++;
            end_col--;
        }
    }
    for(int i= 0; i< R; i++){
        for(int j= 0; j< C; j++){
            if(i> j){
                swap(a[i][j], a[j][i]);
            }
        }
    }
            for(int i= 0; i< R; i++){
                for(int j= 0; j< C; j++){
                    cout<<(a[i][j])<<" ";
            }
            cout<<endl;
        }

}

int main(){
    int a[R][C]= {{1,2,3,4,5}, {0,9,8,7,6}, {1,2,3,4,5}, {0,9,8,7,6}, {1,2,3,4,5}};
    cout<<"For a"<<R<<"x"<<C<<" image"<<endl;
    cout<<"Before Rotation"<<endl;
    for(int i= 0; i< R; i++){
        for(int j= 0; j< C; j++){
                cout<<(a[i][j])<<" ";
        }
        cout<<endl;
    }
    cout<<"Rotated Image"<<endl;
    rotate_img(a);
    return 0;
}