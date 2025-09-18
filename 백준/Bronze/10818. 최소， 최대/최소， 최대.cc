#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }

    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());

    std::cout << min << " " << max << std::endl;
    return 0;
}