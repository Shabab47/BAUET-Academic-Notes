#include<bits/stdc++.h>
using namespace std;

map<string,vector<pair<string,int>>> g;

int total_weight=0;

set<string> all_nodes;

priority_queue<pair<int,pair<string,string>>,vector<pair<int,pair<string,string>>>,greater<pair<int,pair<string,string>>>> pq;

void kruskalAlg(map<string,vector<pair<string,int>>> &g){

    for(auto a:g){
        for(auto b:g[a.first]){
            pq.push({b.second,{a.first,b.first}});
        }
    }

    int edges_used=0;

    map<string,bool> visited;

    for(auto n:all_nodes){
        visited[n]=false;
    }

    auto start=pq.top();
    visited[start.second.first]=true;


    while(!pq.empty() && all_nodes.size()-1>edges_used){
        auto top=pq.top(); pq.pop();
        int weight=top.first;
        string u=top.second.first;
        string v=top.second.second;

        if(visited[v]) continue;

        cout<<u<<" -> "<<v<<" "<<weight<<endl;

        total_weight+=weight;
        visited[v]=true;

        edges_used++;
    }

    cout<<"Total weight: "<<total_weight;
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

        pq.push({w,{n1,n2}});
    }

    kruskalAlg(g);
}
