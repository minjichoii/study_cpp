# C++의 커서(Iterator)

## `cursor`란?
`cursor`는 `std::list<char>`에서 현재 위치를 나타내는 **반복자(iterator)**입니다.
C++에서 반복자는 리스트, 벡터, 맵 등의 컨테이너 요소를 탐색하고 조작하는 데 사용됩니다.

## 커서 선언
```cpp
std::list<char>::iterator cursor = li.end();
```
- `std::list<char>::iterator`는 `std::list<char>`의 반복자 타입입니다.
- `li.end()`는 리스트의 **마지막 요소 다음을 가리키는 반복자**를 반환합니다.

C++11 이상에서는 `auto`를 사용할 수도 있습니다:
```cpp
auto cursor = li.end();
```
이렇게 하면 `cursor`의 타입이 자동으로 `std::list<char>::iterator`로 추론됩니다.

## 커서 조작
### 커서 이동
```cpp
if (cursor != li.begin()) cursor--; // 왼쪽 이동 (L 명령어)
if (cursor != li.end()) cursor++;   // 오른쪽 이동 (D 명령어)
```
- `cursor--`는 **커서를 왼쪽(리스트의 시작 방향)으로 한 칸 이동**시킵니다.
- `cursor++`는 **커서를 오른쪽(리스트의 끝 방향)으로 한 칸 이동**시킵니다.

### 문자 삽입
```cpp
li.insert(cursor, 'x');
```
- 커서 위치에 문자 `'x'`를 삽입합니다.
- 삽입 후 커서는 기존 위치를 유지합니다.

### 문자 삭제
```cpp
if (cursor != li.begin()) {
    cursor--;                    // 삭제할 요소를 가리키도록 왼쪽으로 이동
    cursor = li.erase(cursor);   // 삭제 후 커서를 업데이트
}
```
- **커서를 왼쪽으로 이동한 후 삭제**합니다.
- `erase(cursor)`는 **삭제된 원소 다음 위치의 반복자**를 반환하므로, `cursor`를 업데이트해야 합니다.

## `cursor = li.erase(cursor);`가 필요한 이유
`erase()`는 **삭제된 원소 다음 요소를 가리키는 반복자**를 반환합니다.
삭제 후 이 반환값을 `cursor`에 저장하지 않으면 **커서가 무효한 위치를 가리킬 수 있어 예기치 않은 동작이 발생**할 수 있습니다.

### 예제 코드:
```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> li = {'a', 'b', 'c', 'd'};
    auto cursor = li.begin(); // 커서는 'a'를 가리킴

    cursor++; // 'b'로 이동
    cursor = li.erase(cursor); // 'b' 삭제 후 커서를 'c'로 이동

    for (auto it = li.begin(); it != li.end(); it++)
        cout << *it;  // 출력: acd
}
```

## 정리
- **`cursor`는 리스트를 탐색하는 반복자(iterator)이다.**
- **`L/D` 명령어로 이동 가능하며, `P` 명령어로 문자 삽입 가능하다.**
- **`B` 명령어(삭제)는 `cursor = erase(cursor);` 형태로 사용해야 한다.**
- **`erase()` 후 커서를 반드시 업데이트해야 유효한 반복자를 유지할 수 있다.**
