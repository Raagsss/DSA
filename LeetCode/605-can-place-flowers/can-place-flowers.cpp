class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int p=flowerbed.size();
        int count=0;

        for(int i=0;i<p;i++) {
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==p-1 || flowerbed[i+1]==0)) {
                flowerbed[i]=1;
                count++;
                if(count>=n) return true;
            }
        }

        return count>=n;
    }
};