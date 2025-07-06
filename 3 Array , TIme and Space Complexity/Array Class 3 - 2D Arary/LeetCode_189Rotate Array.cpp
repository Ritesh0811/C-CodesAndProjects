// https://leetcode.com/problems/rotate-array/


// In circular shift problems - you can use modulas operations

// another mehod is to solve using temparary array and rotation.


//Submitted solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>ans(n);

        for(int index=0; index<n;index++){

            int new_index = (index+k)%n;
            ans[new_index] = nums[index];
        }

        nums = ans;
    }
};