#include<iostream>
using namespace std;

bool checkPosition(int maze[100][100], int N, int i, int j){
    //vertical check
    int row = i;
    while(row>=0){
        if(maze[row][j]==1){
            return false;
        }
        row--;
    }
    //right diagonal check
    int x = i;
    int y = j;
    while(x>=0 && y<N){
        if(maze[i][j]==1){
            return false;
        }
        y++;
        x--;
    }
    
    //left diagonal check
    x = i;
    y = j;
    while(x >= 0 && y>=0){
        if(maze[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    return true;
}
bool nQueen(int maze[][100], int n, int i){
    if(i==n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<maze[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //recursive case
    for(int j=0; j<n; j++){
        if(checkPosition(maze, n, i, j)){
            maze[i][j]=1;
            bool canplace = nQueen(maze, n, i+1);
            if(canplace){
                return true;
            }
            maze[i][j] = 0;
        }
    }
    return false;
}
int main(){
    int N;
    cout<<"Enter board size"<<endl;
    cin>>N;   
    int board[100][100] = {0};
    nQueen(board, N, 0);
}