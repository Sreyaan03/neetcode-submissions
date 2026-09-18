class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        
        

        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);

        for(auto edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

            //indegree[v]++;
            //indegree
        }
       vector<bool> visited(n,false);
       int count=0;
       for(int i=0;i<n;i++)
       {
        if(!visited[i]) {
        count++;
        queue<int> q;
        q.push(i);
        visited[i]=true;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int neighbour:adj[node])
            {
                if(!visited[neighbour])

                {
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }
       }
       }
       return count;
    }
};
