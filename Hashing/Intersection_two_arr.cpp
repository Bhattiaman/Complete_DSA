class Solution {
  public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int> st;
        
        for(int i = 0; i < n; i++){
            st.insert(a[i]);
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            if(st.find(b[i]) != st.end()){
                count++;
            }
        }
        return count;
    }
};