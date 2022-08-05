class Solution {
public:
    static int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> res(n);
        for_each(res.begin(), res.end(), [](int &r){
                 r = 0;
         });
        for(auto link:trust){
            res[link[0] - 1] = -1; // It is impossible to be the judge
        } 
        for (auto link:trust){
            res[link[1] - 1] += (res[link[1] - 1] == -1 ? 0 : 1);
            
        }
        for (int i = 0; i < res.size(); i ++){
            if (res[i] >= n - 1){
                return i + 1;
            }
        }
        return  -1;
    }
};