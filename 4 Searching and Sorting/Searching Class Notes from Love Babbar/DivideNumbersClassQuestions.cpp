#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend) {
  int s = 0;
  int e = dividend;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s <= e) {

    if(mid * divisor == dividend) {
      return mid;
    }
    if(mid * divisor < dividend) {
      //ans store
      ans = mid;
      //right me jao
      s = mid+1;
    }
    else {
      //left
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}


int main() {

    int divisor = 7;
    int dividend = 55;

    int ans = getQuotient(abs(divisor), abs(dividend));
    // abs will send only positive values to function

    // for handling negative cases
    if((divisor>0 && dividend<0)||(divisor<0 && dividend>0)){

        ans=0-ans;

    }

    cout << "The quotient is : " << ans << endl;

    return 0;

}