class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()) {
            if(nums1[i]<nums2[j]) {
                result.push_back(nums1[i++]);
            }else {
                result.push_back(nums2[j++]);
            }
        }

        while(i<nums1.size()) {
            result.push_back(nums1[i++]);
        }

        while(j<nums2.size()) {
            result.push_back(nums2[j++]);
        }

        int p=result.size();

        if(p%2!=0) {
            return result[p/2];
        }else {
            return  (result[p/2-1]+result[p/2])/2.0;
        }
    }
};