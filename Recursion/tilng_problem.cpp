#include<iostream>
using namespace std;
// Give ways to put (4,1) and (1,4) tiles on a (4,n) wall
int ways(int n){
    //if there n == 4 then there are two ways of fitting the tiles.
    //either horizontal or vertical
    //if n == 3 or less then there is only one way to put tiles which is horizontaly  
    if(n<=3){
        return 1;
    }
    return ways(n-4) + ways(n-1);
}

int main(){
    cout<<ways(10);

}