#include <iostream>
#include <deque>


using namespace std;


int main(){

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(99);
    cout << dq.size() <<endl;

    cout << dq.front() <<endl;
    cout << dq.back() <<endl;

    dq.pop_back();
    //dq.pop_front();

    cout << dq.front() <<endl;
    cout << dq.back() <<endl;


    return 0;
}