class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n = pref.size();
        vector<int> ans(n);
        ans[0] = pref[0];
        for(int i = 1; i<n; i++){
            ans[i] = pref[i]^pref[i-1];
        }
        return ans;
    }
};
