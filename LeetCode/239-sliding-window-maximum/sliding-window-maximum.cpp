class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        for(int i=0;i<nums.size();i++) {
            if(!dq.empty() && dq.front()==i-k) {
                dq.pop_front();    //out of bound elements
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]) {
                dq.pop_back();     //remove all the smaller than or equal elements
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);   //push the final numbers to ans
            }
        }
        return ans;
    }
};