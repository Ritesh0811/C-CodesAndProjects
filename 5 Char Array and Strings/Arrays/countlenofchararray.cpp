#include <iostream>
#include <string.h>

using namespace std;


int countlength(char ch[],int size){

    int lenght=0;

    for(int i=0;i<size;i++){

        if(ch[i]=='\0'){// check for null character to stop counting.
            break;
        }else{
            lenght++;
        }
    }
    return lenght;
}

int main(){

    char ch[100];
    cin.getline(ch,100);

    //int length = countlength(ch,100);

    //cout << "Lenght of char array entered inp is:" << length<< endl;

    //inbuild function to count ch array lenght - strlen(ch)

    cout << "Lenght of char array entered inp is:" << strlen(ch)<< endl; // make sure to import string.h


    return 0;
}