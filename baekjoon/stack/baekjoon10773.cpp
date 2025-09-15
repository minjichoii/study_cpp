#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k;
    cin >> k;

    stack<int> s;
    int num;
    for(int i=0; i<k; i++) {
        cin >> num;
        if (num == 0) s.pop();
        else s.push(num);
    }

    int sum=0;
    int size;
    size=s.size();
    for (int i=0; i<size; i++) {
        sum += s.top();
        s.pop();
    }

    cout << sum;

}