//https://leetcode.com/problems/missing-number/


// sum of numbers -- n = n*(n+1)/2
// take sum of actual array
//then take differnce and you get the missing number.


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum=0;
        int n= nums.size();
        for(int index=0; index<n;index++){

            sum = sum + nums[index];
        }

        int total = ((n)*(n+1))/2;
        int ans = total-sum;

        return ans;


    }
};