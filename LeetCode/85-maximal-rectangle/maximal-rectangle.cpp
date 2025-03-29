class Solution {
private:
    vector<int> nextSmallerElement(int* arr,int n) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--) {
            int element=arr[i];

            while(st.top()!=-1 && arr[st.top()]>=element) {
                st.pop();
            }

            ans[i]=st.top();
            st.push(i);
        }

        return ans;
    }

    vector<int> nextPreviousElement(int* arr,int n) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i=0;i<n;i++) {
            int element=arr[i];

            while(st.top()!=-1 && arr[st.top()]>=element) {
                st.pop();
            }

            ans[i]=st.top();
            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(int* heights,int n) {
        vector<int> next(n);
        next=nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev=nextPreviousElement(heights,n);
        int area=INT_MIN;

        for(int i=0;i<n;i++) {
            int l=heights[i];

            if(next[i]==-1) {
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newArea=l*b;
            area=max(area,newArea);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> heights(m,0);
        
        int area=0;

        for(int i=0; i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j]=='1') {
                    heights[j]+=1;
                } else {
                    heights[j]=0;
                }
            }
            area=max(area,largestRectangleArea(heights.data(),m));
        }
        return area;
    }
};