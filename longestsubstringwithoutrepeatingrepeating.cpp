class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(128,0);
        int l=0,r=0,n=s.size();
        int ans=0;
        while (r<n) {
            while (count[s[r]] >= 1) {
                count[s[l]]--;
                l++;
            }

            count[s[r]]++;

            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
        
    }
};
