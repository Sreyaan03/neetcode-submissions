class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;

        int newStart = newInterval[0];
        int newEnd = newInterval[1];

        int n = intervals.size();

        for (int i = 0; i < n; i++) {

            // Current interval is completely after newInterval
            if (intervals[i][0] > newEnd) {
                res.push_back({newStart, newEnd});

                copy(intervals.begin() + i,
                     intervals.end(),
                     back_inserter(res));

                return res;
            }

            // Current interval is completely before newInterval
            else if (intervals[i][1] < newStart) {
                res.push_back(intervals[i]);
            }

            // Overlapping interval
            else {
                newStart = min(newStart, intervals[i][0]);
                newEnd = max(newEnd, intervals[i][1]);
            }
        }

        // New interval goes at the end
        res.push_back({newStart, newEnd});

        return res;
    }
};