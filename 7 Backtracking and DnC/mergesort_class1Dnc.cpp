#include <iostream>
#include <vector>
#include <string>

using namespace std;


//Dnc - Divide and Conqure
//Backtracking - all are related to recursion

//Merge Sort - Is Divide and Conqure / Backtracking

// Also homework do "Inversion Count" and also do merge sort with Inplace sorting as we are taking extra memory while solving

//Time complexity -- nlog(n)

void merge(int arr[], int s, int e){

    int mid = (s+e)/2;

    int lenLeft = mid -s +1; //left array ki lenght - +1 islia kyu ki 0th index hai to lenght nai aaegi sahise
    int lenRight = e-mid; // e-(mid+1)+1 --> e - mid - 1 + 1 --> e - mid

    // lets create left and right array [empty] inside heap memory - use "new" keyword and ref from stack memory pointers
    int *left = new int[lenLeft]; //lenLeft size ka array in heap is access by pointer left from stack memory
    int *right = new int[lenRight];

    //Next is to copy values from original array to left/right array and then sort and merge

    int k=s; //array me traverse karne k lie

    //k --> starting index of left array values in original array
    for(int i=0; i<lenLeft; i++){
        left[i] = arr[k]; // left array madhe i index la arr madhli k pasun lenLeft parynt values copy karna
        k++;
    }

    //copy values from original array to right array
    k= mid+1;

    for(int i=0; i< lenRight; i++){
        right[i] = arr[k];
        k++;
    }

    //now actual merge sort is here -
    // 2 pointer approach se left and right array me jaenge and jo chota hoga wo pehle main array me dalenge

    int leftIndex = 0;
    int rightIndex = 0;

    //yahi pe galti karte hai log - main array traverse k lie b ek index lo
    int mainArrayIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight){//index size peksha kami aahe to parynt

        if(left[leftIndex] < right[rightIndex]){// left array ka first ele vs right array ka 1st ele compare

            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //now 2 more cases -- agar left side wala array bada hai ya right side wala bada hai to handle karna hai

    //right me ele hai abhibhi to remaining elements jaise k taise daldo main array me
    while(rightIndex < lenRight){
        arr[mainArrayIndex]=right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    //left me ele hai abhibhi to remaining elements jaise k taise daldo main array me
    while(leftIndex < lenLeft){
        arr[mainArrayIndex]=left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //heap memory wale array yad se delete karna bhai
    delete [] left;
    delete [] right;

}

void mergeSort(int arr[], int s, int e){


    //base case
    if(s>e){
        //invalid array
        return;
    }

    if(s==e){
        //single element array - no need to sort
        return;
    }

    //break
    int mid = (s+e)/2;

    //left part me break karo -- s se mid tak
    //right part me break -- mid+1 se e tak
    //recursion ko call karo and left and right wale array sort kardo

    //recursive call for left side
    mergeSort(arr, s, mid);

    //recursive call for right side
    mergeSort(arr, mid+1,e);

    //now merge two sorted arrays
    merge(arr,s,e); // function create karo and call karo

}

int main(){

    int arr[]= {2,1,6,8,4,5};
    int size = 6;

    int s=0;
    int e = size-1;

    cout << "before merge sort" <<endl;
    for(int i=0; i<size;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;

    mergeSort(arr, s, e);

    /*
    for(auto ele:arr){
        cout << ele << " ";
    }
    */
    cout << "after merge sort" <<endl;
    for(int i=0; i<size;i++){
        cout << arr[i] <<" ";
    }

    cout << endl;
    return 0;
}