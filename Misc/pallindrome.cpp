#include <iostream>
#include <cstring>
using namespace std;
bool isPallindrome(char ch[]){
    int len= strlen(ch)-1;
    for(int i= 0; i<=len; i++){
        if(ch[i] != ch[len-i]){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch, 100);
    bool Value= isPallindrome(ch);
    if(Value== 0){
        cout<<"Not Pallindrome";
    }
    else{
        cout<<"Is a Pallindrome";
    }
    return 0;
}