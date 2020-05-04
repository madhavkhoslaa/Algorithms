#include <iostream>
#include <cstring>
using namespace std;
void remove_duplicate(char ch[]){
    int len= strlen(ch);
    for(int j= 0; j<len; j++){
    for(int i= j; i<len; i++){
        if(ch[i]== ch[i+1]){
            ch[i+1]= ch[i+2];
        }
    }
    }
    for(int i= 0; i<strlen(ch); i++){
        cout<<ch[i];
    }
}
int main(){
    cout<<"Enter text for duplicate removal: ";
    char ch[100];
    cin.getline(ch, 100);
    remove_duplicate(ch);
    return 0;
}