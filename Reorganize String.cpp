class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for (auto it : mp) {
            if (it.second > (n+1)/2) {
                return "";
            }
            pq.push({it.second,it.first});
        }
        string res = "";
        while(pq.size() > 1) {
            auto top1 = pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();
            res += top1.second;
            res += top2.second;
            top1.first--;
            top2.first--;
            if(top1.first > 0) {
                pq.push(top1);
            }
            if(top2.first > 0) {
                pq.push(top2);
            }
        }
        if(!pq.empty()) {
            if(pq.top().first > 1) {
                return "";
            }
            res += pq.top().second;
        }
        return res;
    }
};
