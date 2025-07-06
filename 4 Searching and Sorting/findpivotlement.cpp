//LeetCode - https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <iostream>
using namespace std;

class Solution {
public:

    //dont get confused with nums and arr - jo pass karoge wahi use kroge
    int findPivotIndex(vector<int>& arr){

        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s/2+e/2;


        while(s<=e){

            if(s==e){
                //single element case
                return s;
            }
            // take care of this extra condn mid+1 < n ; kyu ki [1,3] wale test case dry run
            //me mid-1 = -1 horaha tha
            if(mid+1 < n && arr[mid]> arr[mid+1]){

                return mid;

            }else if(mid-1 >=0 && arr[mid]< arr[mid-1]){

                return mid-1;

            }else if(arr[s]>arr[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }

        mid=s/2+e/2;
        }
        return -1;
    }

    //binary search code
    int binarysearch(vector<int>& nums, int s,int e, int target){

        int mid = s/2 + e/2;

        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }

            if(target > nums[mid]){

                s=mid+1;

            }else{
                e=mid-1;
            }
            mid = s/2 + e/2;
        }

        return -1;
    }

    //main function which was already given
    int search(vector<int>& nums, int target) {
        int pivotindex = findPivotIndex(nums);
        int ans=-1;
        int n=nums.size();

        //search in A
        if(target >= nums[0] && target<=nums[pivotindex]){

            ans=binarysearch(nums,0,pivotindex,target);

        }else if(target >= nums[pivotindex+1] && target<=nums[n-1]){

            ans=binarysearch(nums,pivotindex+1,n-1,target);

        }

        return ans;
    }
};