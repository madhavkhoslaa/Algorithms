#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
    public:
        char data;
        bool terminal;
        int count;
        unordered_map<char, Node*> children;
        Node(char d){
            data = d;
            count = 1;
            terminal = false;
        }
};

class Trie{
    private:
        Node* root;
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
                    temp->count +=1;
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
        void unique(char* w){
            char unique[100];
            int len;
            Node* temp = root;
            for(int i=0; w[i]!='\0'; i++){
                char ch = w[i];
                if(root->children.count(ch)){
                    temp = temp->children[ch];
                    while(temp->count!=1){
                        unique[i] = ch;
                        len++;
                    }
                }
            for(int i=0; i<len; i++){
                cout<<unique[i];
            }
            }
        }

};


int main(){
    Trie t;
    char words[][100] = {"a", "hello", "not", "nope", "news", "apple"};
    char w[100];
    for(int i=0; i<6; i++){
        t.insert(words[i]);
    }
    for(int i=0; i<6; i++){
        t.unique(words[i]);
        cout<<endl;
    }
}