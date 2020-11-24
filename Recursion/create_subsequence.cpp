#include<stack>
#include<iostream>

using namespace std;

void generate_subseq(char* sub, char* out ,int i, int j){
    if(sub[i]=='\0'){
        out[j]='\0';
        cout<<"base"<<endl;
        cout<<out<<endl;
        cout<<"---";
        return;
    }
    //include the current char
    out[j]=sub[i];
    cout<<"include"<<endl;
    generate_subseq(sub, out, i+1, j+1);
        cout<<"---";
    //exclude the current char
    cout<<"exclude"<<endl;

    generate_subseq(sub, out, i+1, j);
        cout<<"---";

}
int main(){
    char input[]="abc";
    char output[10];
    generate_subseq(input, output, 0, 0);
cout<<"nigga"<<endl;
cout<<output;
}