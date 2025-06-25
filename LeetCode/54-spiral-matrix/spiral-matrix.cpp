class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int cnt=0;
        int total=row*col;

        int strow=0;
        int stcol=0;
        int endrow=row-1;
        int endcol=col-1;

        while(cnt<total) {
            
            if(cnt<total) {
                for(int index=stcol;index<=endcol;index++) {
                    ans.push_back(matrix[strow][index]);
                    cnt++;
                }
                strow++;
            }

            if(cnt<total) {
                for(int index=strow;index<=endrow;index++) {
                    ans.push_back(matrix[index][endcol]);
                    cnt++;
                }
                endcol--;
            }

            if(cnt<total) {
                for(int index=endcol;index>=stcol;index--) {
                    ans.push_back(matrix[endrow][index]);
                    cnt++;
                }
                endrow--;
            }

            if(cnt<total) {
                for(int index=endrow;index>=strow;index--) {
                    ans.push_back(matrix[index][stcol]);
                    cnt++;
                }
                stcol++;
            }
        }
        return ans;
    }
};