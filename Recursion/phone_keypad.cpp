#include<iostream>
using namespace std;
char codes[][5] = { " ", " ", "ABC" , "DEF" , "GHI" , "JKL" , "MNO" , "PQRS" , "TUV" , "WXYZ"};

void keypad(char* in, char* out, int i, int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return ;
    }
    int digit = in[i] - '0';
    // char '6' - '0' = integer 6
    if(digit==0 || digit==1){
        out[j]=' ';
        keypad(in, out, i+1, j+1);
    }
    else{
        for(int k=0; codes[digit][k] !='\0'; k++){
            out[j] = codes[digit][k];
            keypad(in, out, i+1, j+1);
        }
    }
return ;
}

int main(){
    char IN[100];
    char OUT[200];
    cout<<"Enter Number"<<endl;
    cin>>IN;
    keypad(IN, OUT, 0, 0);
    return 0;

}