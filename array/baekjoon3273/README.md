# 🚀 C++ `unordered_set` 정리

## ✅ `unordered_set`이란?
`unordered_set`은 C++ STL에서 제공하는 **해시 테이블 기반의 집합(Set) 컨테이너**로, **중복 없는 값 저장 및 빠른 탐색**이 가능하다.

### 📌 주요 특징
- **중복된 값 저장 불가** (자동으로 중복 제거)
- **빠른 탐색 속도 (`O(1)`)**
- **정렬되지 않은 상태로 저장**
- **삽입/삭제/탐색 연산이 평균 `O(1)`, 최악 `O(n)`**

---

## 🔹 `unordered_set` 기본 사용법
### 1️⃣ 선언 및 초기화
```cpp
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> mySet;  // 정수를 저장하는 unordered_set
    
    mySet.insert(10);  // 10 추가
    mySet.insert(20);  // 20 추가
    mySet.insert(10);  // 중복 값 추가 (무시됨)
    
    cout << "Set의 크기: " << mySet.size() << endl;  // 출력: 2
    return 0;
}
```

---

### 2️⃣ 요소 존재 여부 확인 (`find()` / `count()`)
```cpp
unordered_set<int> mySet = {1, 2, 3, 4, 5};

// 방법 1: find() 사용
if (mySet.find(3) != mySet.end()) {
    cout << "3이 존재합니다!" << endl;
}

// 방법 2: count() 사용 (값이 있으면 1, 없으면 0 반환)
if (mySet.count(6) == 0) {
    cout << "6은 없습니다!" << endl;
}
```

---

### 3️⃣ 요소 삭제 (`erase()`, `clear()`)
```cpp
unordered_set<int> mySet = {10, 20, 30};

mySet.erase(20);  // 20 삭제
cout << "Set의 크기: " << mySet.size() << endl;  // 출력: 2

mySet.clear();  // 모든 요소 삭제
cout << "Set의 크기: " << mySet.size() << endl;  // 출력: 0
```

---

## 🔥 `unordered_set` 활용 예제
### ✅ 배열에서 특정 합을 가지는 쌍 찾기 (`O(n^2) → O(n)` 개선)
```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, x;
    cin >> n;  // 배열 크기 입력
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;  // 목표 합

    unordered_set<int> seen;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int target = x - arr[i];
        
        if (seen.find(target) != seen.end()) {
            cnt++;  // target이 이미 `seen`에 있으면 카운트 증가
        }
        
        seen.insert(arr[i]);  // 현재 숫자를 `seen`에 추가
    }

    cout << cnt;
}
```

### 🔹 **왜 `unordered_set`을 사용하면 빠를까?**
| 방법 | 시간 복잡도 | 비교 방식 |
|------|------------|------------|
| **배열 탐색 (`O(n^2)`)** | `O(n^2)` | 모든 `i, j` 쌍을 직접 비교 |
| **`unordered_set` 활용 (`O(n)`)** | `O(n)` | 이전 숫자들과만 비교하여 빠르게 탐색 |

✅ **탐색 속도가 `O(1)`이라 전체 연산을 `O(n)`으로 줄일 수 있음!** 🚀

---

## 🎯 `unordered_set` vs `set`
| 컨테이너 | 내부 구조 | 탐색 속도 | 중복 허용 | 자동 정렬 |
|-----------|-------------|-------------|-------------|-------------|
| `unordered_set` | **해시 테이블** | `O(1)` (평균) / `O(n)` (최악) | ❌ 중복 불가 | ❌ 정렬 안 됨 |
| `set` | **레드-블랙 트리 (BST)** | `O(log n)` | ❌ 중복 불가 | ✅ 정렬됨 |

📌 **정렬이 필요하면 `set`, 빠른 탐색이 필요하면 `unordered_set`을 사용!**

---

## ✅ 정리
🔹 `unordered_set`은 **중복 없는 데이터 저장 & 빠른 탐색(`O(1)`)** 가능!  
🔹 `find()`와 `count()`를 이용해 빠르게 값 존재 여부 확인!  
🔹 `erase()`로 특정 값 삭제 가능!  
🔹 **탐색 속도가 빠르므로 (`O(n^2) → O(n)`) 알고리즘 최적화에 유용!** 🚀  

📌 **정렬이 필요하면 `set`, 속도가 중요하면 `unordered_set`을 사용하자!**

