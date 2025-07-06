#include <iostream>
#include <vector>

using namespace std;

//Fibonacci using recursion
//0,1,1,2,3,5,8,13,21...

int Fib(int n){

    //base case
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    int ans = Fib(n-1) + Fib(n-2);

    return ans;

}


int main(){

    //int opt=Fib(8);
    cout << "We are solving" << endl;

    cout << "The nth term is-->" << Fib(7) <<endl;

    return 0;
}