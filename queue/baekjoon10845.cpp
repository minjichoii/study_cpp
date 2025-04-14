#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, x;
    queue<int> Q;
    string cmd;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> x;
            Q.push(x);
        }
        else if (cmd == "pop") {
            if (Q.empty()) cout << -1 <<'\n';
            else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if (cmd == "size") {
            cout << Q.size() << '\n';
        }
        else if(cmd == "empty") {
            cout << Q.empty() << '\n';
        }
        else if(cmd == "front") {
            if (Q.empty()) cout << -1 << '\n';
            else cout << Q.front()<<'\n';
        }
        else if(cmd == "back") {
            if (Q.empty()) cout << -1 << '\n';
            else cout << Q.back() << '\n';
        }
    }
}
