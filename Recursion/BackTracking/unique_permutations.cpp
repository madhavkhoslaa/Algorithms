#include<iostream>
#include<string>
#include<set>

using namespace std;

void permutations(char* in, int i, set<string> &s){
    if(in[i]=='\0'){
        string strr(in);
        s.insert(strr);
        return;
    }
    for(int j=i; in[j]!='\0'; j++){
        swap(in[i], in[j]);
        permutations(in, i+1, s);
        swap(in[i], in[j]);
    }
    return ;
}

int main(){
    char s[]="aba";
    set<string> se;
    permutations(s, 0, se);
    for(auto str:se){
        cout<<str<<endl;
    }
    return 0;
}