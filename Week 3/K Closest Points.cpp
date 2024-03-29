class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++){
            pq.push({(points[i][0]*points[i][0]) + (points[i][1]*points[i][1]),{points[i][0],points[i][1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>>ans1;
        while(pq.size()){
            vector<int>ans2;
            ans2.push_back(pq.top().second.first);
            ans2.push_back(pq.top().second.second);
            ans1.push_back(ans2);
            pq.pop();
        }
        return ans1;
    }
};