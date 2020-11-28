#include<iostream>
using namespace std;

bool path(char maze[][10], int sol[][10], int i, int j, int M, int N){
    if(i==M && j==N){
    sol[M][N] = 1;
    for(int l = 0 ; l<= M; l++){
        for(int m = 0; m<=N; m++){
            cout<<sol[l][m]<<" ";
        }
        cout<<endl;
    }
    cout<<"______"<<endl;
    return true;
    }
    //if Ith and Jth element are out of maze return false
    if(i>M || j>N || i<0 || j<0)
    {
        return false;
    }
    //if Ith and Jth element si equivalent to X
    if(maze[i][j]=='X'){
        return false;
    }
    //Asuming solution exists in the grid;
    sol[i][j] = 1;
    bool rightSucc = path(maze, sol, i, j+1, M, N);
    bool downSucc = path(maze, sol, i+1, j, M, N);
    //backtracking;
    sol[i][j] = 0;
    if(rightSucc||downSucc){
        return true;
    }
    return false;
}


int main(){
    char maze[][10]= {
        "0000",
        "00X0",
        "000X",
        "0x00"
    };
    int sol[10][10] = {0};
    int M = 4, N=4;
    path(maze, sol, 0, 0, M, N);
    return 0;
}