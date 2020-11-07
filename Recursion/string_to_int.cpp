#include<iostream>
#include<string>
using namespace std;

int strtoint(char* digits, int len){
    if(len==0){
        return 0;
    }
    int digit = digits[len-1] - '0';
    int smaller = strtoint(digits, len-1);
    return smaller*10 + digit;
}

int main(){
    char N[] = "1234";
    int len = 4;
    int dig = strtoint(N, len);
    cout<<"Digits as integer: "<<dig<<endl;
}