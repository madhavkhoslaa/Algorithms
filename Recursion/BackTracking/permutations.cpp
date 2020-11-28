#include<iostream>
using namespace std;

void permutations(char* in, int i){
    if(in[i]=='\0'){
        cout<<in<<endl;
        return;
    }
    for(int j=i; in[j]!='\0'; j++){
        swap(in[i], in[j]);
        permutations(in, i+1);
        swap(in[i], in[j]);
    }
    return ;
}

int main(){
    char s[]="abc";
    permutations(s, 0);
    return 0;
}