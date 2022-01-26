class Solution {
public:
    bool isFeasible(vector<int>nums,int m,int mid)
    {
        int req=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i] > mid)
            {
                req++;
                sum=nums[i];
            }
            else
            sum += nums[i];
        }
        return req<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
       int n=nums.size();
        
       int low = *max_element(nums.begin(),nums.end());
        int high = 0;
       for(int i=0;i<nums.size();i++)
         high+=nums[i];
        
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(isFeasible(nums,m,mid))
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
                low=mid+1;
                
        }
        return ans;
    }
};