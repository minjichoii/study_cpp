#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[5];
    int avg=0, mid=0;

    for (int i=0; i<5; i++){
        cin >> arr[i];
        avg+=arr[i];
    }

    sort(arr, arr+5);

    cout << avg/5 << endl << arr[2];

}