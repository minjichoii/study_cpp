#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string s;

    for (int i=0; i<n; i++) {
        std::cin >> s;
        int cnt = 0;
        int sum = 0;

        for (int j=0; j<s.length(); j++) {
            if (s[j]=='O') {
                cnt++;
            } else {
                cnt = 0;
            }
            sum +=cnt;
        }
        std::cout << sum << std::endl;
    }    
    return 0;
}