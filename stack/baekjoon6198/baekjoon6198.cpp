#include <iostream>
#include <stack>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> building;
    long long answer = 0;
    int h;

    for (int i=0; i<n; i++) {
        cin >> h;
        
        // 비어있을 때 스택에 넣기 (첫번째 건물)
        if(building.empty()) {
            building.push(h);
            continue;
        }

        // 건물 중 현재 건물 높이보다 작은 애들 다 빼줌. 높은애 나올때까지
        // 나를 볼 수 있는 애를 찾는다고 생각??
        while(!building.empty() && building.top() <= h) {
            building.pop();
        }

        answer += building.size();

        building.push(h);
    }

    cout << answer;
}