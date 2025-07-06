//https://leetcode.com/problems/sort-colors/

//Solution --

class Solution {
public:
    void sortColors(vector<int>& nums) {


        int n = nums.size();
        int index=0;

        //Below are 2-pointers
        int left=0;
        int right = n-1; //last index

        while(index <= right){

            if(nums[index]==0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }else if(nums[index]==2){

                swap(nums[index],nums[right]);
                right--;

                //Catch - Do not increase the index here - coz we donno what will be
                //element after swapping at index
            }else{
                index++; // for 1's
            }

        }

    }
};