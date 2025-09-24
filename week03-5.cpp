class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) nums[k++]=nums[i];
        }

        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }

    }
};
