#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<pair<int,int>> tower;
    int height;

    for (int i=1; i<=n; i++) {
        cin >> height;
        while (!tower.empty()) {
            //수신탑 있음
            if (height < tower.top().second) {
                cout << tower.top().first << " ";
                break;
            }
            //수신탑 탐색
            tower.pop();
        }
        if (tower.empty()) cout << 0 << " ";
        tower.push(make_pair(i, height));

    }

    
}