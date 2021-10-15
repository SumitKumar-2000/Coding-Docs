#include<iostream>
#include<list>
using namespace std;
class Graph{
    public:
        int n;
        list<int> *adjlist; // array of linked list

        Graph(int N){
            n = N;
            adjlist = new list<int>[n] ; 
        }

        void addEdge(int u,int v,bool bidir = true) {
            adjlist[u].push_back(v);
            if(bidir){
                adjlist[v].push_back(u);
            }
        }

        void print(){
            for(int i = 0;i<n;i++){
                cout<<i<<"-->";
                for(auto neighbour : adjlist[i]){
                    cout<<neighbour<<" ";
                }
                cout<<endl;
            }
        }

        bool edgeIsPresent(int u, int v){
            //l[u]: neighbours of u
            for(auto neighbour : adjlist[u]){
                if(neighbour == v){
                    return true;
                }
            }
            return false;
        }
};
int main(){
    
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,4);
    g.addEdge(4,3);
    g.addEdge(1,3);
    g.addEdge(2,1);
    g.addEdge(2,3);

    g.print();

    if(g.edgeIsPresent(1,3)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

return 0;
}