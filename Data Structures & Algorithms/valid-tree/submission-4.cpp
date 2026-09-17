class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
         if(edges.size()!=n-1)
         return false;

         if(edges.size() ==0 )
         return true;


         vector<vector<int>> adj(n);
         vector<int> indegree(n,0);
         int count=0;
         for(auto edge:edges)
         {
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

            indegree[u]++;
            indegree[v]++;
         }
         queue<int> q;
         for (int i = 0; i < n; i++) {
            if (indegree[i] == 1) {
                q.push(i);
            }
        }
         while(!q.empty())
         {
            int node=q.front();
            q.pop();
            count++;
            for(int neighbor:adj[node])
            {
                 indegree[neighbor]--;

                if (indegree[neighbor] == 1) {
                    q.push(neighbor);
            }

         }
         }
         return count==n;

    
    }
};
