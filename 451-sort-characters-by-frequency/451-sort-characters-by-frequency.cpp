class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(auto it : s) mp[it]++;
        auto comp = [&](pair<char, int> A, pair<char, int> B) {
            if(A.second == B.second) return A.first > B.first;
            return A.second < B.second;
        };
        priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(comp)> pq(comp);
        for(auto it : mp) 
            pq.push({it.first, it.second});
        
        string str = "";
        while(!pq.empty()) {
            pair<char, int> p = pq.top();
            pq.pop();
            int t = p.second;
            while(t--) str += p.first;
        }
        return str;
    }
};