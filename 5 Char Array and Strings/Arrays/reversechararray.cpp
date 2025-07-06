#include <iostream>
#include <string.h>

using namespace std;

void reverse(char ch[],int size){//2 pointer approach

    int i=0;
    int j=size-1;

    while(i<=j){

        swap(ch[i],ch[j]);
        i++;
        j--;

    }

}

int main(){

    char ch[100];
    cin.getline(ch,100);

    cout << "Before" << ch;

    int lenght = strlen(ch);

    reverse(ch,lenght); // dont give array size here , give length of array [ no of elements]

    cout << "The reverse of input taken is: " << ch << endl;

    // inbuild function to calculate reverse of char array - strrev()

    char bh[10];
    cin.getline(bh,100);

    int lenght1 = strlen(bh);

    cout << "By inbuild function " << strrev(bh) << endl;

    return 0;
}