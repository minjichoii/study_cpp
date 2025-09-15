#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[21];

    for (int i=1; i<21; i++) arr[i]=i;

    int a,b;
    for (int i=0; i<10; i++){
        cin >> a >> b;

        reverse(arr+a, arr+b+1);
    }

    for(int i=1; i<=20; i++) cout << arr[i] << ' ';
}