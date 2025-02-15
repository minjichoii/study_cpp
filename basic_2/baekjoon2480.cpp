#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(a,a+3);
    int sum;
    
    if (a[0]==a[1] && a[1]==a[2]) {
        sum = 10000 + a[0]*1000;
    }
    else if(a[0]==a[1] || a[0]==a[2]) {
        sum = 1000+a[0]*100;
    }
    else if(a[1]==a[2]){
        sum=1000+a[1]*100;
    }
    else sum=a[2]*100;

    cout << sum ;
}