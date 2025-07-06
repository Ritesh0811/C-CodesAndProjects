#include <iostream>
#include <string.h>

using namespace std;

void converttoupper(char ch[], int n){

    int index=0;

    while(ch[index]!='\0'){

        char currChar = ch[index];

        if(currChar >='a' && currChar<='z'){
            ch[index] = currChar - 'a' + 'A';
        }
        index++;
    }
}

int main(){

    char ch[100];
    cin.getline(ch,100);

    cout << "Before" << ch;

    int lenght = strlen(ch);

    // inbuild function to calculate reverse of char array - strrev()
    converttoupper(ch,100);

    cout << "Input given to upper case: " << ch <<endl;

    return 0;
}