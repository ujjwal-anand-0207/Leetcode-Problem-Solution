class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        unordered_map<int, int> m;
        for(auto x: edges) m[x[1]]++;
        for(int i=0;i<n;i++){
            if(m[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};