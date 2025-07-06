#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;


//Substring using recursion
void Substring(string str, string output, int index){

    //base case
    if(index >= str.length()){
        //that means answer ban gaya hai
        //print ans
        cout << output <<endl;
        return;
    }

    char ch= str[index]; //character check karte hai one by one

    //ya to exclude karo
    Substring(str, output, index+1); //matlab output me char save nai kia , age badhe

    //ya include karo
    output.push_back(ch);
    Substring(str, output, index+1);


}

int main(){

    string str = "abc";

    string output = "";
    int index = 0;
    Substring(str, output, index);

    cout << output <<endl;

    return 0;
}