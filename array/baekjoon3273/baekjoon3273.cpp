#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n); //동적 배열
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    unordered_set<int> seen; //이미 나온 숫자 저장하는 해시셋

    int cnt=0;
    for(int i=0; i<n; i++) {
        int target = x-arr[i]; //내가 찾을 짝! 이전의 숫자들과 비교할거임

        if (seen.find(target)!=seen.end()) cnt++;
        seen.insert(arr[i]);
    }

    cout << cnt;
}