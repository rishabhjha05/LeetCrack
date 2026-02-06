class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        bool found=false;
        int n=nums.size(),i=0;
        while(i<n-1)
        {
            int j=n-1;
            if(nums[i]+nums[j]==target)
            {
                sol.push_back(i);
                sol.push_back(j);
                found=true;
                break;
            }
            else 
            {
                while(i<j)
                {
                    if(nums[i]+nums[j]!=target)
                        j--;
                    else
                    {
                        sol.push_back(i);
                        sol.push_back(j);
                        found=true;
                        break;
                    }
                }
            }
            if(found)
                break;
            i++;
        }
        return sol;

    
    }
};