#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T> 
class Graph{
    public:
        unordered_map<string,list<string>> l;

        void addEdge(T u,T v,bool bidir = false){
            l[u].push_back(v);
            if(bidir){
                l[v].push_back(u);
            }
        }

        void print(){
            for(auto node:l){
                cout<<node.first<<"--> ";
                for(auto neighbour: node.second){
                    cout<<"neighbour"<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    Graph <string> g;
    g.addEdge("Modi","Trumph",true);
    g.addEdge("Modi","Yogi",true);
    g.addEdge("Yogi","Prabhu",false);
    g.addEdge("Prabhu","Mode",false);
    g.addEdge("Putin","Mode",false);
    g.addEdge("Putin","Trumph",false);
    g.addEdge("Putin","Pope",false);

    g.print();

return 0;
}