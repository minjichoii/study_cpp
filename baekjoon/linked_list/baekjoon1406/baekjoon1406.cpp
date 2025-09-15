#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int m;
    string s="";
    string ans="";

    cin >> s;
    list<char> li(s.begin(), s.end());

    //자동 타입 추론 수행? cursor의 타입을 자동으로 결정
    auto cursor = li.end();
    //std::list<char>::iterator cursor와 같음!

    cin >> m;

    for(int i=0; i<m; i++){
        char cmd, c;
        cin >> cmd;
        if (cmd=='L'){
            if (cursor!=li.begin()) cursor--;
        }
        else if (cmd=='D'){
            if (cursor!=li.end()) cursor++;
        }
        else if (cmd=='B'){
            if (cursor!=li.begin()){
                cursor--;
                cursor=li.erase(cursor);
            }
        }
        else if (cmd=='P'){
            cin >> c;
            li.insert(cursor, c);
        }

    }

    for (cursor=li.begin(); cursor!=li.end(); cursor++)
        cout << *cursor;
}