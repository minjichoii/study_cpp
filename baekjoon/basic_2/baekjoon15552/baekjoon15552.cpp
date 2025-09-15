#include <iostream>
using namespace std;

int main() {
    // C와 C++의 입출력 동기화 해제
    ios::sync_with_stdio(false);
    // cin과 cout의 연결 해제
    cin.tie(NULL);

    int t;
    int a,b ;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
}