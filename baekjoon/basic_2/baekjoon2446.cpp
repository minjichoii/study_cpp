#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=2*n-1; i>=1; i--){
        if(i>=n) {// 9 8 7 6 5
            for (int j=0; j<2*n-1-i; j++) cout << " ";
            for (int j=0; j<2*(i-n)+1; j++) cout << "*";
        }
        else {// 4 3 2 1
            for (int j=0; j<i-1; j++) cout << " ";
            for (int j=0; j<2*(n-i)+1; j++) cout << "*";
        }
        cout << "\n";
    }
}