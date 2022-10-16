class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto p:nums){
            mp[p]++;
        }
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            if(mp.find(-x)!=mp.end())
                return x;
        }
        return -1;
    }
};
