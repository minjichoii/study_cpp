#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;
    string ans;

    int num=1;
    while (n--) {
        int t;
        cin >> t;
        while (num <= t) {
            s.push(num++);
            ans += "+\n";
        }
        if (s.top() != t) {
            cout << "NO\n";
            return 0;
        }
        // 같을떄?
        s.pop();
        ans += "-\n";
    }

    cout << ans;
}