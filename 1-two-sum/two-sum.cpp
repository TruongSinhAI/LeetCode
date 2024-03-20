class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2 = nums;
        sort(nums.begin(), nums.end());
        int i =0, j=nums.size()-1;
        vector<int> ans = {i,j};
        while (i<j){
            if (nums[i]+nums[j]==target){
                ans[0] = nums[i], ans[1] = nums[j];
                break;
            }
            else if (nums[i]+nums[j]>target) {
                j--;
            }
            else i++;
        }
        cout<<ans[0]<<' '<<ans[1]<<endl;
        for (int i =0; i<nums2.size(); i++){
            if (nums2[i] == ans[0]){ 
                ans[0] = i;
                break;
                }
        }
        for (int i =nums2.size()-1; i>=0; i--){
            if (nums2[i] == ans[1]){ 
                ans[1] = i;
                break;
                }
        }
        return ans;
    }
};