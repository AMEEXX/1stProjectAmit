#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> adj[9] = {{1,3}, {0,2,3}, {1,6}, {0,4}, {3,5},{4,6},{2,5,7,8}, {6,8}, {6,7}};
    
    queue<pair<int,int>>q;
    vector<int>dis(9,INT_MAX);
    dis[0] = 0;
    while(!q.empty()){
        auto[node, dist]= q.front();
        q.pop();
        for(auto it : adj[node]){
            if(dis[node] + 1 < dis[it]){
                dis[it] = dis[node] + 1;
            }
            q.push({it,dis[it]});
            
        }
    }
    cout<<dis[3];
    return dis[3];
    

} 
