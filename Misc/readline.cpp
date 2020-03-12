#include <iostream>
using namespace std;
void readline(char ch[], int SIZE, char delim= '\n'){
    int i= 0;
    char a= cin.get();
    while(a!= delim){
        ch[i]= a;
        i++;
        if(i==(SIZE-1)){
            break;
        }
        a= cin.get();
    }
    cout<<ch;
}
int main(){
    char ch[100];
    readline( ch, 100);
    return 0;
}