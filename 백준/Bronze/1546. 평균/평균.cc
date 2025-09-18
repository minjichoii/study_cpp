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

    int max = *std::max_element(arr.begin(), arr.end());

    double res =0;
    for (int i=0; i<n; i++) {
        res+=(double)arr[i]/max*100;
    }

    std::cout << res/n << std::endl;
    return 0;
}