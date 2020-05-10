#include <iostream>
#include <string>
using namespace std;
int l(int a, int n){
    string spel[10]= { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n== 1){
        cout<<spel[a]<<" ";
        return 1;
    }
    else{
        l((a-a%10)/10, n-1);
        cout<<spel[a%10]<<" ";
    
    return -1;
    }
}
int main() {
    int a= 12345;
    l(a, 5); 
}
