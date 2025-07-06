//https://leetcode.com/problems/rotate-image/


//Solution

//***********VERY VERY VERY VERY VERY IMPORTANT*******************

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //transpose karo 2 d matrix ko

        for(int i=0; i<n;i++){
            for(int j=i;j<matrix[i].size();j++){

                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse - 2D matrix ki rows to reverese karo -- rows=n-1

        for(int i=0; i<n;i++){

            //reverse each row
            reverse(matrix[i].begin(),matrix[i].end());

        }

    }
};

