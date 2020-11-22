#include<iostream>
using namespace std;
//was in with a person can jump a n height stair case 
//k is the maximum height of stairs he can jump
int ways(int n, int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
    for(int i=1; i<=k; i++){
        ans += ways(n-i, k);
    }
    return ans;
}

int main(){
    cout<<ways(4, 3);
}