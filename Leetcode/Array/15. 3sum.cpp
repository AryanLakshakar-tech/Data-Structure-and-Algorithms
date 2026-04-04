// Time complexity O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set <vector<int>> s;

        for(int i=0;i<=n-1;i++){
            int low = i+1;
            int high = n-1;

            while(low<high){
            int sum=nums[i]+nums[low]+nums[high];
            
            if(sum==0){
                s.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
            }

            else if(sum<0){
                low++;
            }

            else{
                high--;
            }

            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
