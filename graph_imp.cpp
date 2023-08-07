#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>adj;
    void edge(int u,int v,int dir)
    {
        adj[u].push_back(v);
        if(dir==0)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
                cout<<j<<",";
            cout<<endl;
        }
    }
};

int main()
{   graph gh;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,dir;
        cin>>u;
        cin>>v;
        cin>>dir;
        gh.edge(u,v,dir);
    }
    gh.print();
}
