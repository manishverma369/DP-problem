// isme hume NGE nikalna hai ek array[i] ke aage konsa first bada no mila
// leetcode me dusra vrsion hai nums1,2 wala simple hai 
// map  me store kro 
// stack bna lo 
// travese kro n-1 se stack ko  traverse kr whiel loop se 
// NG nhi mila -1 dalo nhi tho array[i] daal do 
// stack me push kro 
// leetcode wale me  vector bna lo map se NGE fetch kr lo class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;

        // nums2 par piche se loop
        for(int i = nums2.size() - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            
            if(st.empty()){
                mp[nums2[i]] = -1;
            } else {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        vector<int> res;
        for(int s : nums1){
            res.push_back(mp[s]);
        }
        return res;
    }
};