#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> a;
    int num;
    for (int i=0; i<n; i++) {
        cin >> num;

        if (a.empty()){
            a.push(num);
            continue;
        }
        while (!a.empty() && a.top() <=num) {
            cout << num ;
            a.pop();
        }
        
        a.push(num);
        cout << -1;
    }
}