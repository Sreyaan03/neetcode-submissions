class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            pair<long long, vector<int>>,
            vector<pair<long long, vector<int>>>,
            greater<pair<long long, vector<int>>>
        > pq;

        for(auto& point : points) {

            long long dist =
                1LL * point[0] * point[0] +
                1LL * point[1] * point[1];

            pq.push({dist, point});
        }

        vector<vector<int>> result;

        while(k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};