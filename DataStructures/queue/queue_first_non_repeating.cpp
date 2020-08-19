#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<char> q;
    int Frequency[27]= {0};
    char ch;
    cin>>ch;
    while(ch!='.'){
        q.push(ch);
        Frequency[ch-'a']++;
        while (!q.empty())
        {
            char element_index = q.front() - 'a';
            if(Frequency[element_index]> 1){
                q.pop();
            }
            else{
                cout<<q.front()<<endl;
                break;
            }
        }
        if(q.empty()){
            cout<<-1<<endl;
        }
        cin>>ch;
    }
    return 1;
}