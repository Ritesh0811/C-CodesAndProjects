#include<iostream>
#include<deque>
#include<queue>

#include<vector>


using namespace std;

//find first non repeated word in string
//leetcode - https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
//refer - https://www.techiedelight.com/find-index-of-a-character-in-string-in-cpp/

int main(){

    string str = "ababc";

    queue <char> q;

    int freq[26] = {0};

    for(int i=0; i<str.length(); i++){

        char ch=str[i];
        freq[ch -'a']++;
        q.push(ch);

        //answer find karlo
        while(!q.empty()){
            char frontchar = q.front();

            if(freq[frontchar - 'a'] > 1){
                //yani ye ans nai hai -- logic nusar frq array me count add ho raha hai jo b char aaega str me uska
                //freq[ch - 'a'] --> matlab ch mese a minus karo to unka ascii val minas hota and 0 , 1 etc values add hoti

                q.pop();

            }else{ // freq[frontchar - 'a'] =  1 wala case

                //that means yahi ans hai
                cout << frontchar << "->" ;
                break;

            }
        }

        if(q.empty()){
            //koi ans nai nikla
            cout << "#" << "->";

        }
    }


    return 0;
}