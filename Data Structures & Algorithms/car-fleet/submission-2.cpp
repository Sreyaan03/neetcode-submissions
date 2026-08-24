class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int, int>>());

        stack<double> st;

        for (int i = 0; i < cars.size(); i++) {

            double currenttime =
                (double)(target - cars[i].first) / cars[i].second;

            if (st.empty() || currenttime > st.top()) {
                st.push(currenttime);
            }
        }

        return st.size();
    }
};
