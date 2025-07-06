//HW Questions
#include <iostream>
using namespace std;

// find area of circle -- Everything should be float datatype not int
void areaofCircle(int radius){

    float area;
    area = 3.14 * radius * radius;

    cout << area << endl ;

}

// find factorial of no
void Fact(int num){

    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact*i;
    }
    cout << fact << endl ;

}

// print all prime nos from 1 to N
void prime(int num){

    for(int i=2; i<=num; i++){

        int ctr = 0;

        for(int j=2; j<i; j++){

            if(i%j==0){

                ctr = ctr+1;

            }
        }
        if(ctr==0){

            cout <<i <<endl;
        }
    }
}

// print all digits of N integer --- MOST IMPORTANT
void Digit(int num){

    int first;
    while(num > 0){

        first = num%10;
        num = num/10;
        cout << first;

    }
    cout<<endl;
}

// create a number using digits --- MOST IMP -
void Number(int NoOfDigits){

    int Number=0;

    for(int i=0; i< NoOfDigits;i++){

        cout << "Enter Digit :" <<endl;
        int digit;
        cin >> digit;

        Number = Number*10 + digit;
    }

    cout<< Number <<endl;

}

// print binary representation of decimal no - TODO
void Binary(int num){

    int first;
    while(num > 0){

        first = num%10;
        num = num/10;

        cout << first;

    }
}


// convert km to miles -- take return type and function as float
void KmtoMiles(int num){

    cout << "KM TO Miles " << 0.6137119 * num << endl;

}

// convert ferhanite to celcius -- Everything should be double datatype
void FertoCelcius(int num){

    int op = ((num-32)*5)/9;
    cout << "Ferhenite to celcious " <<op <<endl;

}


// Count all set bits of a number -
void CalSetBits(int num){

    int setbitCount = 0;

    while(num>0){

        int bit = num%2;
        if(bit==1){
            setbitCount++;
        }
        num = num/2;

    }
    cout << setbitCount << endl;

}

// Count all set bits of a number using bitwise operations and right shifts
void CalSetBitsBitwise(int num){

    int setbitCount = 0;

    while(num>0){

        int bit = (num & 1); //when we perform and operation of number with 1 [0001] then we get unit place bit.
        if(bit==1){
            setbitCount++;
        }
        num = num>>1; // here we will shift bit presentation of number by 1 place and again first unit place bit.

    }
    cout << setbitCount << endl;

}

//  set Kth bit of a number - Create a mask using 1<<k and OR that value with Num to set Kth bit
void SetKthBit(int num, int K){

    int mask = 1<<K;
    int ans = num | mask ;

    cout << ans <<endl;

}


// check even odd using bitwise operator
void BitwiseEvenOdd(int num){

    int res;

    if(num&1){

        cout << "ODD Number" << endl;


    }else{

        cout << "EVEN Number" << endl ;

    }
}


int main(){

    areaofCircle(5);
    Fact(5);
    prime(8);
    Digit(198736423);
    BitwiseEvenOdd(11);
    FertoCelcius(98);
    SetKthBit(10,2);
    KmtoMiles(98);
    CalSetBits(15);
    CalSetBitsBitwise(15);
    Number(3);

    return 0;
}


