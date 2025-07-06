#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printPermutation(string str, int index){

    //base case
    if(index >= str.length()){

        cout << str << " ";
        return;
    }

    //processing
    for(int j=index; j <= str.length(); j++){

        swap(str[index], str[j]);

        //call recursion
        printPermutation(str,index+1);

        //agar string str call by ref karo "string &str" to overwrite hoga islia back tracking karna padta hai
        //swap(str[index], str[j]);
    }
}


int main(){

    string str = "abc";
    int index =0 ;

    printPermutation(str, index);

    return 0;
}