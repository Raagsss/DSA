class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int curr=1;

        while(top<=bottom && left<=right) {
            for(int i=left;i<=right;i++) {
                ans[top][i]=curr++;
            }
            top++;

            for(int i=top;i<=bottom;i++) {
                ans[i][right]=curr++;
            }
            right--;

            if(top<=bottom) {
                for(int j=right;j>=left;j--){
                    ans[bottom][j]=curr++;
                }
                bottom--;
            }
            if(left<=right) {
                for(int i=bottom;i>=top;i--){
                    ans[i][left] = curr++;
                }
                left++;
            }
        }
        return ans;
    }
};