class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int mini=nums[i];
            int maxi=nums[i];
            for(int j=i;j<nums.size();j++){
                if(nums[j]<mini)
                    mini=nums[j];
                                
                if(nums[j]>maxi)
                    maxi=nums[j];
                if(maxi==maxK&&mini==minK)
                    ans++;
                
            }
        }
        return ans;
//         priority_queue<int> pq1;
//         priority_queue<int, vector<int>, greater<int> > pq2;
//         for(int i=0;i<nums.size();i++){
//             pq1.push(nums[i]);
//             pq2.push(nums[i]);
//             for(int j=i;j<nums.size();j++){
//                 pq1.push(nums[j]);
//                 pq2.push(nums[j]);
//                 // cout<<pq1.top()<<" "<<minK<<" "<<pq2.top()<<" "<<maxK<<endl;
//                 if(pq2.top()==minK&&pq1.top()==maxK)
//                     ans++;
//             }
//             while (!pq1.empty()) {
//                 // cout << '\t' << g.top();
//                 pq1.pop();
//             }
            
//             while (!pq2.empty()) {
//                 // cout << '\t' << g.top();
//                 pq2.pop();
//             }
//             // cout<<endl;
//         }
        return ans;
    }
};
