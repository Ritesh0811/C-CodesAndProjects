#include <iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target) {

  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e) {

    if (mid - 1 >= 0 && arr[mid - 1] == target) {
      return mid - 1;
    }

    if (arr[mid] == target) {
      return mid;
    }

    if (mid + 1 < n && arr[mid + 1] == target) {
      return mid + 1;
    }

    if (target > arr[mid]) {
      // go right
      s = mid + 2; // here +2 kyu ki already mid-1, mid+1 me ek comparision
                   // hogaya hai islia to avoid repetation, use +2

    } else {
      // go left
      e = mid - 2;
    }
    mid = s + (e - s) / 2; //very very very imp - i missed this
  }

  return -1;
}

int main() {

  int arr[] = {20, 10, 30, 50, 40, 70, 60};
  int n = 7;
  int target = 60;

  int found = searchNearlySorted(arr, n, target);

  cout << "Code is running" << endl;
  cout << "The target is at index : " << found << endl;

  return 0;
}