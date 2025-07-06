#include <iostream>
#include <string.h>

using namespace std;

void removeattherate(char ch[], int n){

    int index=0;
    //as we are transversing full array - time complexity is O(n)
    while(ch[index]!='\0'){

        char currChar = ch[index];

        if(currChar =='@'){
            ch[index] = ' '; // insert space - a;so dont use " " instead use ' '
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
    removeattherate(ch,100);

    cout << "Input filtered: " << ch <<endl;

    return 0;
}