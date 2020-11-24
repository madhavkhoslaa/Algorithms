#include<iostream>
using namespace std;

void generate_brackets(char* brackets, int npair, int idx, int open, int close){
    //base case
    if(idx==2*npair){
        brackets[idx]='\0';
        cout<<brackets<<endl;
        return ;    
    }
    //put opening bracket
    if(open<npair){
        brackets[idx]='(';
        generate_brackets(brackets, npair, idx+1, open+1, close);
    }
    //put closing bracket
    if(close<open){
        brackets[idx]=')';
        generate_brackets(brackets, npair, idx+1, open, close+1);
    }
    return ;
}

int main(){
    int N;
    cout<<"Enter the bracker pair number: "<<endl;
    cin>>N;
    char string[2*N];
    generate_brackets(string, N, 0, 0, 0);
}