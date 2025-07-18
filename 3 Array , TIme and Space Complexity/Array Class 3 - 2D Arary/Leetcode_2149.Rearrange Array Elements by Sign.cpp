//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

//Sols -https://github.com/kamyu104/LeetCode-Solutions/blob/master/C++/rearrange-array-elements-by-sign.cpp

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int pos=0;
        int neg=1;

        for(int i=0;i<n;i++){

            if(nums[i]>0){

                ans[pos]=nums[i];
                pos=pos+2;

            }else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        nums = ans;
        return nums;

    }
};