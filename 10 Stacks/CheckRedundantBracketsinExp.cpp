#include <iostream>
#include <stack>

using namespace std;


bool checkRedundant(string &str){

    stack<char> st;
    for(int i=0; i<str.length(); i++){

        char ch = str[i];

        if(ch == '(' || ch =='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else if(ch == ')'){

            int opreatorCount = 0;
            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp == '+' || temp =='-' || temp=='*' || temp=='/'){
                    opreatorCount++;

                }

                st.pop();
            }

            //yaha par tabhi aaoge jab satack empty hai ya top pe opening bracket pada hai
            st.pop();

            if(opreatorCount == 0){
                return true;
            }
        }



    }

    //yaha aaage matlab - har ek bracket k pair me ek operator mila hai
    return false;

}

int main(){

    string str = "((a+b)*(c+d))";

    bool ans = checkRedundant(str);

    if(ans == true){
        cout << "Redundant brackets present " <<endl;
    }else{
        cout << "Redundant brackets NOT present " <<endl;
    }

    //redundant matlab falatu ka bracket

    return 0;
}