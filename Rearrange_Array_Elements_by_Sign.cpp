class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<int> pos;
        vector<int> neg;
        for(auto i: nums){
            if(i>0) pos.push_back(i);
            if(i<0) neg.push_back(i);
        }
        nums.clear();
        for(int i = 0; i<pos.size();i++){
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};
