#include<bits/stdc++.h>
using namespace std;

map<int,vector<pair<int,pair<int,int>>>> adj;

int n,m,T;

set<int> env;

void output(){
    int totalCost=0;
    int totalImpact=0;
    set<int> visited;

    for(int impact:env){
        for(int j=0;j<adj[impact].size();j++){
            int cost=adj[impact][j].first;
            int u=adj[impact][j].second.first;
            int v=adj[impact][j].second.second;

            if((visited.empty()||visited.find(u)!=visited.end()||visited.find(v)!=visited.end())&&totalImpact+impact<T){
                if(visited.find(u)==visited.end()||visited.find(v)==visited.end()){
                    visited.insert(u);
                    visited.insert(v);
                    totalCost+=cost;
                    totalImpact+=impact;
                }
            }
        }
        if(visited.size()==n)break;
    }

    if(totalImpact<T&&visited.size()==n)
        cout<<totalCost<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
}

int main(){
    cin>>n>>m>>T;

    int tu,tv,tc,te;
    for(int i=0;i<m;i++){
        cin>>tu>>tv>>tc>>te;
        env.insert(te);
        adj[te].push_back({tc,{tu,tv}});
    }

    for(int impact:env)
        sort(adj[impact].begin(),adj[impact].end());

    output();
}
