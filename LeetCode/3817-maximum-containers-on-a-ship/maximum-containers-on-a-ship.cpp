class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int m=n*n;
        for(m;m>0;m--){ 
            if(m*w <= maxWeight) {
                return m;
            }
        }
        return 0;
    }
};