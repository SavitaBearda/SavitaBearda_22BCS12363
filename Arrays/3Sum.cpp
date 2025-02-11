class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <vector<int>> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1, r=nums.size()-1;
            while(l<r)
            {
                int sum =nums[i]+nums[l]+nums[r];
                vector <int> temp;
                if(sum==0)
                {
                    temp={nums[i],nums[l],nums[r]};
                    ans.push_back(temp);
                l++;
                r--;
                while(l<r && nums[l]==temp[1])
                {
                    l++;
                }
                while(l<r && nums[r]==temp[2])
                {
                    r--;
                }
                }
                else if(sum>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }

            }

        }
return ans;
        
    }
};
