#include <iostream>
#include <cstring>
using namespace std;
bool isPallindrome(char ch[]){
    bool flag=true;
    int len= strlen(ch)-1;
    for(int i= 0; i<=len; i++){
        if(ch[i] != ch[len-i]){
            flag=false;
            return flag;
            break;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch, 100);
    bool Value= isPallindrome(ch);
    if(Value== false){
        cout<<"Not Pallindrome";
    }
    else{
        cout<<"Is a Pallindrome";
    }
    return 0;
}
