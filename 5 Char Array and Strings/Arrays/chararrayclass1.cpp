#include <iostream>
using namespace std;


int main(){

    //creation
    char ch[10];

    //input
    //cin >> ch; // this doesnt work if you press enter, tab,space in two words - it only takes first- hence use getline

    cin.getline(ch, 50); // maxm input size you can give, here its ex 99
    // its delimeter is enter or newline - but works for space or tab

    //char array are memory efficient and faster than interger arrays

    //print the array
    cout << "Printing the inputted array: " <<ch;




    // //How we used to do with int array - taking inp with for loop and printing also for loop

    // int arr[10];

    // //take inputs inside array
    // for(int i=0;i<10;i++){
    //     cin >> arr[i];
    // }

    // //print array
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << endl;
    // }

    return 0;
}