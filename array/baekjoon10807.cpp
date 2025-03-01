#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    
    int find;
    cin >> find;

    int cnt = count(arr.begin(), arr.end(), find);

    cout << cnt;
}