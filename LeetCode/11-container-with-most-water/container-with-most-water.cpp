class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;

        int area=0;

        while(i<j) {
            area=max((j-i) * min(height[i],height[j]),area);
            if(height[i]<height[j]) {
                i++;
            }else {
                j--;
            }
        }

        return area;
    }
};