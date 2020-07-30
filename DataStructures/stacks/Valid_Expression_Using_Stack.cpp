#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool ValidExpression(string exp){
    cout<<"Checking Validity for string:  "<<exp<<endl;
    stack<char> s;
    for(int i= 0; i<=exp.length(); i++){
        if(char(exp[i])=='('){
            s.push(char(exp[i]));
        }
        else if(char(exp[i])==')'){
            if(s.empty() || s.top()==')'){
                return false;
            }
            else if(!s.empty()||s.top()=='('){
                s.pop();
            }
        }
        
    }
    return s.size()==0;
}
int main(){
    string e;
    bool x;
    cout<<"Enter the String whose validity you want to check: "<<endl;
    getline(cin, e);
    x= ValidExpression(e);
    if(x==1){
        cout<<"Valid!"<<endl;
    }
    else{
        cout<<"Unvalid"<<endl;
    }
}