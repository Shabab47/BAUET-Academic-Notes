#include<bits/stdc++.h>
using namespace std;

map<string,vector<pair<string,int>>> m;

map<string,string> parent;

void path(string child){
    if(parent[child]=="$")return;
    path(parent[child]);
    cout<<" -> "<<child;
}

void bellmanford(string start, map<string,vector<pair<string,int>>> &m){
    map<string,int> dist;
    for(auto node:m){
        dist[node.first]=INT_MAX;
    }

    dist[start]=0;
    parent[start]="$";

    int V=m.size();
    
    bool hasnegativecycle=false;

    for(int i=1;i<=V;i++){
        for(auto node:m){
            string u=node.first;

            if(dist[u]==INT_MAX)continue;

            for(auto neighbour:node.second){
                string v=neighbour.first;
                int weight=neighbour.second;

                if(dist[u]+weight<dist[v]){
                    dist[v]=dist[u]+weight;
                    parent[v]=u;
                    if(i==V){
                        hasnegativecycle=true;
                    }
                }
            }
        }
    }


    if(hasnegativecycle){
        cout<<"Has negative cycle!";
        return;
    }


    cout<<"Shortest path from node "<<start<<" to: "<<endl;
    for(auto it:dist){
        cout<<"Node "<<it.first<<": "<<start;
        path(it.first);
        cout<<": "<<it.second<<endl;
    }

}

int main(){
    string a,b,start;
    int cost;
    cout<<"Enter 2 nodes and adjacent cost(Enter '$' to stop: )\n";
    while(true){
        cin>>a;
        if(a=="$")break;
        cin>>b;
        if(b=="$")break;
        cin>>cost;
        m[a].push_back({b,cost});
    }

    cout<<"\nEnter starting node: ";
    cin>>start;

    bellmanford(start,m);
}

//sample input:
/*

input:
1 4 5
4 3 3
3 2 -10
$

Starting node: 1

output:
Shortest path from node 1 to:
Node 1 0
Node 2 -2
Node 3 8
Node 4 5

*/
