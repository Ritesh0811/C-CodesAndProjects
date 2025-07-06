#include <iostream>
#include <string>
#include <vector>

using namespace std;

//https://www.geeksforgeeks.org/painting-fence-algorithm/

int getPaintWays(int n, int k){

    //base case
    if(n==1){
        return k;
    }

    if(n==2){
        return k + k*(k-1); // for ex - 2 poles and 3 colors - no of ways = 6
    }

    int ans = (k-1) * (getPaintWays(n-1, k) + getPaintWays(n-2, k));

    return ans;

}

int main(){

    int n=3; //number of poles on which we need paint - no third neighbours should be painted same post 2 poles.
    int k=3; //number of colors to paint

    int result = getPaintWays(n,k);

    cout << "The number of Ways to paint poles are --> " <<result <<endl;



    return 0;
}