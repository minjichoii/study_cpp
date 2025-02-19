# 🚀 C++ 입출력 최적화 & 주의할 점  

백준(BOJ) 문제를 풀 때, **입출력이 느리면 시간 초과**가 발생할 수 있다.  
이를 방지하려면 **입출력을 최적화하는 방법**을 알고 있어야 한다.  

---

## ✅ 1️⃣ `ios::sync_with_stdio(false);` 와 `cin.tie(NULL);`  

```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);

```
이 두 줄을 추가하면 입출력 속도가 크게 향상된다. 🔥

| 설정 옵션 | 역할 |
|---|---|
| ios::sync_with_stdio | (false);	C++의 cin/cout과 C의 scanf/printf를 분리해서 더 빠르게 만듦|
| cin.tie(NULL); |	cin이 cout과 묶여 있는 것을 해제하여 입출력 속도를 높임 |

## ✅ 2️⃣ sync_with_stdio(false)가 하는 일

기본적으로 C++의 `cin`과 `cout`은 C의 `scanf`와 `printf`와 동기화되어 있다.
즉, cout을 출력하기 전에 `cin`이 끝날 때까지 기다리는 동작이 포함된다.

📌 이 동기화를 끊으면(`false` 설정)

- C++의 `cin/cout`이 C의 `scanf/printf`보다 더 빠르게 실행됨
- 다만, `printf/scanf`를 동시에 사용하면 이상한 결과가 나올 수 있음 → 섞어 쓰면 안 됨!

## ✅ 3️⃣ cin.tie(NULL)가 하는 일

본적으로 cin은 cout과 묶여(tied) 있어서
- cin을 사용하기 전에 cout을 먼저 실행한다.

**📌 예제 (기본 설정 상태) **
```cpp
cout << "숫자 입력: ";
cin >> num;
```
이 경우, cin이 실행되기 전에 cout이 반드시 실행됨!

📌 cin.tie(NULL)를 설정하면?

- cout 실행을 기다리지 않고 cin을 먼저 수행할 수 있음 → 속도가 빨라짐.

## ✅ 4️⃣ endl 대신 \n을 쓰는 이유

C++에서 cout << endl;을 쓰면, **줄바꿈 + 출력 버퍼를 비우는 동작(flush)**이 함께 일어난다.
하지만, 출력 버퍼를 비우는 동작은 매우 느림.

📌 즉, endl을 쓰면 속도가 느려지므로, 그냥 \n을 쓰는 게 더 빠름!
```cpp
cout << "Hello" << "\n";   // ✅ 빠름
cout << "Hello" << endl;   // ❌ 느림 (불필요한 flush 발생)
```
