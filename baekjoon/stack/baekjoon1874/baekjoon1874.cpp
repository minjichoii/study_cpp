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
        // 첫번째 숫자가 4라면 ( t=4 )
        // 1,2,3,4 push -> 이때 ++++
        while (num <= t) {
            s.push(num++);
            ans += "+\n";
        }
        // 4까지 도달했으니까 pop해줄건데
        // top 수와 t가 같지않으면 수열 못만든다 -> NO 출력
        if (s.top() != t) {
            cout << "NO\n";
            return 0;
        }
        
        s.pop();
        ans += "-\n";
    }

    cout << ans;
}