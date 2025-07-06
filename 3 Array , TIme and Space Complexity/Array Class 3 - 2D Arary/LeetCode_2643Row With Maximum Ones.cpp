//https://leetcode.com/problems/row-with-maximum-ones/


//Solution

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        vector<int>ans;

        int n= mat.size();

        //count max no of 1s in row
        int one_count = INT_MIN;
        //row number in which max 1s
        int row_cnt = -1;

        for(int i=0; i<n; i++){

            //counter to check for each row
            int count = 0;
            for(int j=0; j<mat[i].size();j++){

                if(mat[i][j]==1){

                    count++;

                }
            }
            //after each row completion, compare with one_count and count
            if (count > one_count){
                one_count = count;
                row_cnt = i;
            }
        }
        ans.push_back(row_cnt);
        ans.push_back(one_count);

        return ans;

    }
};