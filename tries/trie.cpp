#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
    public:
        char data;
        bool terminal;
        unordered_map<char, Node*> children;
        Node(char d){
            data = d;
            terminal = false;
        }
};

class Trie{
    private:
        Node* root;
        int count;
    public:
        Trie(){
        root = new Node('\0');
        }
        void insert(char* w){
            Node* temp = root;
            for(int i=0; w[i]!='\0'; i++){
                char ch = w[i];
                if(temp->children.count(ch)){
                    temp = temp->children[ch];
                }
                else{
                    Node* n = new Node(ch);
                    temp->children[ch] = n;
                    temp = n;
                }
            }
            temp->terminal = true;
        }
        bool find(char* w){
            Node* temp = root;
            for(int i=0; w[i]!='\0'; i++){
                char ch = w[i];
                if(temp->children.count(ch)){
                    temp = temp->children[ch];
                }
                else{
                    return false;
                }
            }
            return temp->terminal;
        }

};

int main(){
    Trie t;
    char words[][100] = {"a", "hello", "not", "nope", "news", "apple"};
    char w[100];
    cin>>w;
    for(int i=0; i<6; i++){
        t.insert(words[i]);
    }
    if(t.find(w)){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}