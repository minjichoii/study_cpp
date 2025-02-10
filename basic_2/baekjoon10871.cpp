#include <iostream>
#include <string.h>

using namespace std;

int arr[30];

int main(){
    int n, t;
    cin >> n >> t ;

    int num;

    int j=0;

    for(int i=0; i<n; i++){
        cin >> num;

        if (num<t){
            cout << num << " ";
        }
    }

}