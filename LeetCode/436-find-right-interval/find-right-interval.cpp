class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> result(n,-1);
        vector<pair<int,int>> startWithIndex;

        for(int i=0;i<n;i++){ 
            startWithIndex.push_back({intervals[i][0],i});
        }

        sort(startWithIndex.begin(),startWithIndex.end());

        for(int i=0;i<n;i++) {
            int target=intervals[i][1];
            int start=0;
            int end=n-1;
            int foundIndex=-1;
            while(start<=end) {
                int mid=start+(end-start)/2;
                if(startWithIndex[mid].first>=target) {
                    foundIndex=startWithIndex[mid].second;
                    end=mid-1;
                }else {
                    start=mid+1;
                }
                result[i]=foundIndex;
            }
        } 
        return result;
    }
};