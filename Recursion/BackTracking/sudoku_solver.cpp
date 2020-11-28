#include<iostream>

using namespace std;

bool canPlace(int maze[9][9], int number, int i, int j, int N){
    //check row & col
    for(int k=0; k<N; k++){
        if(maze[i][k]==number || maze[k][j]==number){
            return false;
        }
    }
    
    //check sub block
    int idx= (i/3)*3;
    int idy = (i/3)*3;
    for(int l = idx; l<idx+3; l++){
        for(int m = idy; m<idy+3; m++){
            if(maze[l][m]==number){
                return false;
            }
        }
    }
    return true;
}

bool solve(int maze[9][9], int i, int j, int N){
    if(i==N){
        for(int l=0; l<N; l++){
            for(int m=0; m<N; m++){
                cout<<maze[l][m]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==N){
        return solve(maze, i+1, 0, N);
    }
    if(maze[i][j]!=0){
        return solve(maze, i, j+1, N);
    }
    for(int number=1; number<=9; number++){
        bool solved = canPlace(maze, number, i, j, N);
        maze[i][j] = number;
        if(solved){
            return true;
        }
        
    }
        maze[i][j] = 0;
        return false;
}

int main(){
    int mat[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    solve(mat, 0, 0, 9);
    return 0;
}