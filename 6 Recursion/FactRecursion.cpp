#include <iostream>
#include <vector>

using namespace std;

//factorial using recursion

int recur(int n){

    //base case
    if(n==-0){
        return 1;
    }

    int ans = n * recur(n-1);

    return ans;

}

int main(){


    int fact;
    cout << "What number's factorial you wanted ?" << endl;
    cin >> fact;

    int op = recur(fact);
    cout << "The factorial of number is-> " << op << endl;

    return 0;
}


//Time and Space complexity of Recursive Code -- Find Factorial
// Time Complexity -- O(n)
// Space complexity -- O(n)



//Time and Space complexity of  -- Binary Search
// Time Complexity -- O(log n)
// Space complexity -- O(log n)


//Time and Space complexity of  -- Fibonacci series
// Time Complexity -- O(2^n)   //exponetial -- hence worst way to code fibonacci series
// Space complexity -- O(n)

// Fibonacci series can be calculated in O(n) complexity with dynamic programming - DP
