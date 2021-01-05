#include<iostream>
#include<list>
using namespace std;
class Graph{
    int Vertices;
    list<int>* l;
    public:
        Graph(int Vertices){
            this->Vertices=Vertices;
            l = new list<int>[Vertices];
        }
        void addEdge(int x, int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void show(){
            for(int i=0; i<Vertices; i++){
                cout<<"Vertex:"<<i<<"->";
                for(int neighbour:l[i]){
                    cout<<neighbour<<" ";
                }
            cout<<endl;
            }
        }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.show();

}