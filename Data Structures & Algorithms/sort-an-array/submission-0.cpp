class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> hash;

        for(int i=0;i<nums.size();i++) {
            hash[nums[i]]++;
        }
        int i=0;
        for(auto p : hash) {
            while(p.second--) {
                nums[i++] = p.first;
            }
        }

        return nums;
    }
};