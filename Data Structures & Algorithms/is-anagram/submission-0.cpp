class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map<int,int> map;

        for(int i=0;i<s.size();i++) {
            map[s[i]] += 1;
            map[t[i]] -= 1;
        }

        for(auto count : map) {
            if(count.second)
                return false;
        }

        return true;
    }
};
