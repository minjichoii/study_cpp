#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false); // 입출력 동기화 해제
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i=0; i<n; i++) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}