class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxP = nums[0], minP = nums[0], result = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] < 0) swap(maxP, minP);  // Swap when encountering negative numbers
            
            maxP = max(nums[i], maxP * nums[i]);  // Update max product
            minP = min(nums[i], minP * nums[i]);  // Update min product
            
            result = max(result, maxP);  // Update the result with max product so far
        }
        return result;
    }
};
