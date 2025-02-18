# 📝 헷갈렸던 문제 정리

---

## 📌 1. BOJ 1267 - 핸드폰 요금
- **문제 링크**: [BOJ 1267](https://www.acmicpc.net/problem/1267)

---

### 🔹 문제 요약
- **영식 요금제(Y)**: `(통화시간 // 30 + 1) * 10원`
- **민식 요금제(M)**: `(통화시간 // 60 + 1) * 15원`

---

### ❗ 오답 원인
- **30초나 60초로 나누어떨어질 때 계산을 잘못함.**
- 조건문으로 `if (call % 30 == 0)`를 추가했는데 필요하지 않았음.

---

### 🛑 **틀렸던 코드**
```cpp
if (call % 30 == 0) zero += 10 * (call / 30);
else zero += 10 * (call / 30 + 1);

if (call % 60 == 0) min += 15 * (call / 60);
else min += 15 * (call / 60 + 1);

---

### 🛠️ **정답 코드**
```cpp
#include <iostream>
using namespace std;
int main() {
    int n, call, Y = 0, M = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> call;
        Y += (call / 30 + 1) * 10;
        M += (call / 60 + 1) * 15;
    }
    if (Y < M) cout << "Y " << Y;
    else if (Y == M) cout << "Y M " << Y;
    else cout << "M " << M;
}
--

### ✅ 수정 후 배운 점
- **조건문 없이 시간 단위 나누기**로 계산하는 습관.
- **변수 초기화** 꼭 하기.
