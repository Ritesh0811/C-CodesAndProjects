#include <iostream>

using namespace std;

// find max of 3 nos
void printMax(int num1, int num2, int num3){

    int res = max(num1 , num2);

    int op = max(res,num3);

    cout << "Maximum of three numbers given is: " <<op << endl;

}

// counting print - 1 to n
void Count(int N){

    for(int i=0; i<N; i++){

        cout << i << endl;
    }

}

// check if number is prime
void Prime(int num){

    for(int i=2; i<num; i++){

        if(num%i==0){

            cout <<"Not a Prime Number" << endl;
            return;

        }
    }
    cout << "Its is prime number" <<endl;

}

// check even odd

// there are more more ways to check even or odd using bitwise operations
//https://www.geeksforgeeks.org/check-if-a-number-is-odd-or-even-using-bitwise-operators/
void EvenOdd(int num){

    if(num%2==0){

        cout << "Number is even" << endl;

    }else{

        cout << "Number is odd" << endl;
    }

}

// sum of all numbers upto N
void Sum(int num){

    int op = 0;
    for(int i=1; i<=num; i++){

        op = op +i;

    }
    cout << "Sum of N numbers is: " <<op << endl ;

}

// sum of all even numbers upto 1 to N.
void EvenSum(int num){

    int op=0;
    for(int i=1; i<=num; i++){

        if(i%2==0){

            op = op + i;

        }
    }

    cout << "Sum of Even Numbers is: " << op << endl;

}

int main(){

    printMax(100,86,174);
    Count(5);
    Prime(53);
    EvenOdd(11);
    Sum(10);
    EvenSum(100);

    return 0;
}