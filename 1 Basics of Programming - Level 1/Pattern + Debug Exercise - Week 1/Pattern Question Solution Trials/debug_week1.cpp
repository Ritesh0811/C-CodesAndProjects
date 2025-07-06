#include <iostream>

using namespace std;

int main(){

    //Debug the code. Take input a character, print 1, if its a capital alphabet,
    //print 0, if its a lowercase alphabet, else print -1.

	char c;
    cin>>c;

    if(c>='a' && c<= 'z'){
        cout<<0;
    }
	else if(c>='A' && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }

    return 0;
}