#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Count Derangements (Permutation such that no element appears in its original position)
//https://www.geeksforgeeks.org/count-derangements-permutation-such-that-no-element-appears-in-its-original-position/#practice

int solve(int n){

    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans = (n-1)*(solve(n-1)+(solve(n-2)));
    return ans;

}

int main(){

    int n=4;
    int result = solve(n);

    cout << "The number of combinations are --> " <<result <<endl;



    return 0;
}