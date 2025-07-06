#include <iostream>
#include <vector>

using namespace std;

int fastExp(int a,int b){ // here ex - 5,4 that means 5^4 that is 5*5*5*5
    int ans=1;

    while(b>0){

        if(b & 1){ // calculating if b is even or odd - here even if b & 1 is false - else odd in true case

            ans=ans*a;
        }
        a=a*a;
        b>>=1; //b=b/2
    }

    return ans;


} //time complexity - O(b)



int slowExp(int a,int b){ // here ex - 5,4 that means 5^4 that is 5*5*5*5
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }

    return ans;
} //time complexity - O(b)


int main(){

    cout << slowExp(4,4) << endl;
    cout << fastExp(4,4) << endl;

    return 0;
}