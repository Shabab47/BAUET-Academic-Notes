#include<bits/stdc++.h>
using namespace std;

map<string,vector<pair<string,int>>> g;
set<string> all_nodes;

int total_weight=0;

void primsAlg(map<string,vector<pair<string,int>>> &g){
    string start;
    cout<<"Enter starting node: ";
    cin>>start;

    map<string,bool> visited;

    priority_queue<pair<int,pair<string,string>>,vector<pair<int,pair<string,string>>>,greater<pair<int,pair<string,string>>>> pq;

    visited[start]=true;

    for(auto v:g[start]){
        pq.push({v.second,{start,v.first}});
    }

    int edges_used=0;

    while(!pq.empty() && edges_used<all_nodes.size()-1){
        auto top=pq.top(); pq.pop();

        int weight=top.first;
        string u=top.second.first;
        string v=top.second.second;

        if(visited[v]) continue;

        cout<<u<<" -> "<<v<<" "<<weight<<endl;

        total_weight+=weight;
        visited[v]=true;
        edges_used++;

        for(auto next:g[v]){
            if(!visited[next.first]){
                pq.push({next.second,{v,next.first}});
            }
        }
    }

    cout<<"Total weight: "<<total_weight<<endl;
}

int main(){
    string n1,n2;
    int w;

    cout<<"Enter adjacent 2 nodes and weight(Enter '$' to stop):\n";

    while(1){
        cin>>n1;
        if(n1=="$")break;

        cin>>n2;
        if(n2=="$")break;

        cin>>w;

        g[n1].push_back({n2,w});
        g[n2].push_back({n1,w});

        all_nodes.insert(n1);
        all_nodes.insert(n2);
    }

    primsAlg(g);
}
