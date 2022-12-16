class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i<j){
            ans = max(ans, (min(h[i],h[j])*(j-i)));
            if(h[i] > h[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};