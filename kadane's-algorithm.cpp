class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int r=arr[0];
    for(int i=0;i<arr.size();i++){
        int curr=0;
        for(int j=i;j<arr.size();j++){
            curr=curr+arr[j];
            r=max(r,curr);
        }
    }
    return r;
    }
};
