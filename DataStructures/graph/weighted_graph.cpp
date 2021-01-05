#include<iostream>
#include<list>
#include<unordered_map>
#include<string>
using namespace std;
template<typename T>
class Graph{
    int Vertices;
    unordered_map<T, list<pair<T, int>>> adj;
    public:
    Graph(int vertices){
        this->Vertices=Vertices;
    }
    void addVertice(T x, T y, int weight, bool bidirection){
        if(bidirection){
            adj[x].push_back(make_pair(y, weight));
            adj[y].push_back(make_pair(x, weight));
        }
        else{
            adj[x].push_back(make_pair(y, weight));
        }
    }

    void show(){
        for(pair<T, list<pair<T, int>>> node: adj){
            cout<<"Vertice: "<<node.first<<"->";
            for(pair<T, int> nodes: node.second){
                cout<<nodes.first<<" "<<nodes.second<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph<string> g(4);
    g.addVertice("A", "B", 20, true);
    g.addVertice("B", "D", 40, true);
    g.addVertice("A", "C", 10, true);
    g.addVertice("C", "D", 40, true);
    g.addVertice("A", "D", 50, true);
    g.show();
}