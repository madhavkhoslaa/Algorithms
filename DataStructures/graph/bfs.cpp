#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<map>
using namespace std;

template<typename T>
class Graph{
        map<T, list<T>> g;
    public:
        void addEdge(int x, int y){
            g[x].push_back(y);
            g[y].push_back(x);
        }
        void bfs(T start){
            map<T, bool> visited;
            queue<T> q;
            q.push(start);
            visited[start]=true;
            while(!q.empty()){
                T node = q.front();
                q.pop();
                cout<<node<<" ";
                for(T ngbr: g[node]){
                    if(!visited[ngbr]){
                        q.push(ngbr);
                        visited[ngbr]=true;
                    }
                }
            }
        }
};  

int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);

}