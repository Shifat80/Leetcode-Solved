class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>res(n);
    int prefx=1;
    int postfx=1;
    for(int i=0;i<n;i++){
        res[i]=prefx;
        prefx*=nums[i];
    }
    for(int i=n-1;i>=0;i--){
        res[i] *= postfx;
        postfx *= nums[i];
    }
    return res;
    }
};