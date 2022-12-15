class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<vector<int>> ans(2);
        map<int,int> lost;
        map<int,int> win;
        int n = matches.size();
        for(int i = 0; i<n; i++){
            win[matches[i][0]]++;
            lost[matches[i][1]]++;
        }
        vector<int> v;
        for(auto i: win){
            if(i.second != 0 && lost[i.first]==0) v.push_back(i.first);
        }
        ans[0] = v;
        v.clear();
        for(auto i: lost){
            if(i.second == 1) v.push_back(i.first);
        }
        ans[1] = v;
        return ans;
    }
};