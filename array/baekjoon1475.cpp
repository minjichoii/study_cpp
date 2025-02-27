#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10]={};
    while (n>0) {
        arr[n%10]++;
        n/=10;
    }

    int num=0;
    for (int i=0; i<10; i++) {
        if (i!=6 && i!=9) num= max(num, arr[i]); 
    }

    cout << max(num, (arr[6]+arr[9]+1)/2);

}