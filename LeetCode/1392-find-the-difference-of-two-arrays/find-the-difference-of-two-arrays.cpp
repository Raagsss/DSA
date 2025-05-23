class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // vector<vector<int>> result;
        // map<int,int> count1,count2;

        // for(int i:nums1) {
        //     count1[i]++;
        // }

        // for(int i:nums2) {
        //     count2[i]++;
        // }

        // vector<int> list1;

        // for(int i:nums1) {
        //     if(count2.find(i)==count2.end()) {
        //         list1.push_back(i);
        //         count2[i]=1;
        //     }
        // }

        // vector<int> list2;
        // for(int i:nums2) {
        //     if(count1.find(i)==count1.end()) {
        //         list2.push_back(i);
        //         count1[i]=1;
        //     }
        // }

        // result.push_back(list1);
        // result.push_back(list2);

        // return result;

        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> list1,list2;

        for(int num:set1) {
            if(set2.find(num)==set2.end()) {
                list1.push_back(num);
            }
        }

        for(int num:set2) {
            if(set1.find(num)==set1.end()) {
                list2.push_back(num);
            }
        }

        return {list1,list2};
    }
};