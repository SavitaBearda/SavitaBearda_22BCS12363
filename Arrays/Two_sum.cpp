class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nmap;
        for(int i=0; i<nums.size(); i++)
        {
            int comp=target-nums[i];
            if(nmap.count(comp) && nmap[comp]!=i)
            {
                return {i, nmap[comp]};
            }
            nmap[nums[i]]=i;
        }
        return {};    
    }
};
