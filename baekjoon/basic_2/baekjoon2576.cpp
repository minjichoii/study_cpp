#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[7];
    int cnt=0;

    int sum=0;
    for (int i=0; i<7; i++) {
        cin >> arr[i];

    }

    sort(arr, arr+7);
    int answer=0;

    for (int i=0; i<7; i++){
        if (arr[i]%2==1) {
            sum+=arr[i];
            cnt+=1;
            if (cnt==1) answer=arr[i];
        }
    }
    
    if (cnt==0) cout << -1;
    else cout << sum << endl << answer ;
    

}