class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        unordered_map<string,int> rowst;
        unordered_map<string,int> colst;

        for(int i=0;i<n;i++) {
            string row="";
            for(int j=0;j<m;j++) {
                row+=to_string(grid[i][j])+",";
            }
            rowst[row]++;
        }

        for(int j=0;j<m;j++) {
            string col="";
            for(int i=0;i<n;i++) {
                col+=to_string(grid[i][j])+",";
            }
            colst[col]++;
        }

        int count=0;
        for(const auto& row:rowst) {
            count+=row.second*colst[row.first];
        }

        return count;

    }
};