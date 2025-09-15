# 🏢 백준 6198번 - 옥상 정원 꾸미기

## 📖 문제 설명
- 총 `N`개의 건물이 일렬로 세워져 있음.
- 각 건물들은 **자신보다 앞에 있는 건물들 중 자신보다 낮은 건물을 볼 수 있음**.
- **각 건물이 볼 수 있는 다른 건물의 개수 합**을 구하는 문제.

---

## 💡 해결 방법
### 🔹 핵심 아이디어
1. **스택을 사용하여 "왼쪽에서 나를 볼 수 있는 건물 개수"를 세는 방식**.
2. **현재 건물보다 작은 건물은 스택에서 제거** (어차피 보이지 않기 때문).
3. **스택에 남아 있는 건물의 개수만큼 현재 건물을 볼 수 있음**.

---

## 📌 코드 구현 (왼쪽 → 오른쪽 진행)
```cpp
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

    for (int i = 0; i < n; i++) {
        cin >> h;
        
        // 스택에서 현재 건물보다 낮은 건물 제거
        while (!building.empty() && building.top() <= h) {
            building.pop();
        }

        // 스택에 남아 있는 건물들이 현재 건물을 볼 수 있음
        answer += building.size();

        // 현재 건물을 스택에 push
        building.push(h);
    }

    cout << answer;
}
