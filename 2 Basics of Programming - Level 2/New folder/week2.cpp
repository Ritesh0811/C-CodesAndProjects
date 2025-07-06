#include <iostream>
//WEEK 2 Assignment questions and answers
using namespace std;

int main(){
//pattern week 2 assignments
int N=5;
int rows;
int cols;

//q1 - numeric hollow half pyramid
// for(int rows=0; rows<N; rows++){

//     for(int cols=0; cols< rows+1; cols++){

//         if(cols==0 || cols ==rows || rows==N-1){
//             cout << cols+1;
//         }
//         else{
//             cout << " ";
//         }

//     }

//     cout << endl;
// }

//q2 - Inverted hollow half pyramid
// for(int rows=0; rows<N; rows++){

//     for(int cols=0; cols< N-rows; cols++){

//         if(rows==0 ){
//             cout << cols+1;
//         }else if(cols==0 ){
//             cout << rows+1;
//         }
//         else if(cols == N-rows-1){
//             cout << N;
//         }else{

//             cout << " ";
//         }

//     }

//     cout << endl;
// }

// //OR - simpler logic
// //q2 - Inverted hollow half pyramid
// for(int rows=0; rows<N; rows++){

//     for(int cols=rows+1; cols<=N; cols++){

//          if(cols==rows+1 || cols==N || rows==0){
//             cout << cols;
//         }else{
//             cout << " ";
//         }

//     }

//     cout << endl;
// }


// //q3 - Numeric Palindrome Equilateral Pyramid
// int K=N;

// for(int rows=0; rows<N; rows++){
//     int num=1;
//     for(int cols=0; cols<K; cols++){

//          if(cols < N-rows-1){
//             cout << " ";
//         }else if( cols <= N-1){
//             cout << num;
//             num++;
//         }else if(cols==N){

//             num = num -2;
//             cout << num;
//             num--;
//         }else{
//             cout << num;
//             num--;
//         }
//     }
//     K++;

//     cout << endl;
// }

// //q4 - Solid Half Diamond

// for(int rows=0; rows<N; rows++){
//     for(int cols=0; cols<rows+1; cols++){

//         cout << "*";
//     }
//     cout << endl;
// }

// for(int rows=1; rows<N; rows++){
//     for(int cols=0; cols<N-rows; cols++){

//         cout << "*";
//     }
//     cout << endl;
// }

//OR -- q4 - Solid Half Diamond - Logic by Laksh Bhaiya

// for(int rows=0; rows<2*N-1; rows++){
//     int condn = 0;

//     if(rows < N){
//         condn = rows;
//     }else{
//         condn = N - (rows%N) - 2;
//     }
//     for(int cols=0; cols<=condn; cols++){

//         cout << "*";
//     }
//     cout << endl;
//     }
//     return 0;
// }


// //q5 - Fancy Pattern
// #include "assert.h"

// assert(N<=9) ; // If we are giving N values with Cin, below code works only for value less than eq to 9
// for(int rows=0; rows<N; rows++){

//     int start_num_index = 8-rows;
//     int num = rows + 1;
//     int count_num = num;

//     for(int cols=0; cols<17; cols++){

//         if(cols==start_num_index && count_num >0){

//             cout << num;
//             start_num_index+=2;
//             count_num--;

//         }else{
//             cout << "*";
//         }
//     }
//     cout << endl;
//     }

// //q6 - Fancy Pattern 2
// int d = 1;
// for(int rows=0; rows<N; rows++){
//     for(int cols=0; cols<=rows; cols++){

//         cout << d;
//         d++;
//         if( cols<rows){
//             cout<<"*";
//         }
//     }
//     cout << endl;
//     }

// int start = d-N;
// for(int rows=0; rows<N; rows++){
//     int k=start;
//     for(int cols=0; cols<=N-rows-1; cols++){

//         cout << k;
//         k++;
//         if(cols < N-rows-1){
//             cout << "*";
//         }
//     }
//     start = start - (N - rows- 1);
//     cout << endl;
//     }

// //q7 --Fancy Pattern 3
// for(int rows=0; rows<N; rows++){
//     for(int cols=1; cols<=2*rows+1; cols++){

//         cout<<"*";

//     }
//     cout << endl;
//     }

// for(int rows=1; rows<N; rows++){
//     for(int cols=0; cols<= 2*N-2-2*rows; cols++){

//         cout<<"*";

//     }
//     cout << endl;
//     }

//     return 0;
// }


// //q7 --Fancy Pattern 3 Laksh
// for(int rows=0; rows<N; rows++){

//     int cond = rows <= N/2 ? 2*rows : 2*(N-rows-1);

//     for(int cols=0; cols<=cond; cols++){

//         if(cols <= cond/2){
//             cout << cols+1;
//         }
//         else{
//             cout << cond-cols+1;
//         }
//     }
//     cout << endl;
//     }

//     return 0;
// }

// //q8 --Floyd's Triangle Pattern

// int count = 1;
// for(int rows=0; rows<N; rows++){
//     for(int cols=0; cols< rows+1; cols++){

//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
//     }

//     return 0;
// }

// //q9 --Pascal's Triangle Pattern -- addition of above rows two adject numbers and print to next rows colmns.

// //here always starts with rows = 1 and cols = 1 as we are dividing by cols in formula.
// for(int rows=1; rows<=N; rows++){
//     int count = 1;
//     for(int cols=1; cols<=rows; cols++){

//         cout << count << " ";
//         count = count*(rows-cols)/cols;

//     }
//     cout << endl;
//     }

//     return 0;
// }


// //q9 --Butterfly Pattern
int count = 1;
for(int rows=0; rows<N; rows++){
    for(int cols=0; cols< rows+1; cols++){

        cout << count << " ";
        count++;
    }
    cout << endl;
    }

    return 0;
}