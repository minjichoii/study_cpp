#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int N;
    string command;
    int num;
    int result=0;

    cin >> N; // cin 은 표준 입력 스트림. 키보드 입력받음-> N에 저장

    for (int i=0; i<N; i++){
        cin >> command;

        if(command == "push"){
            cin >> num;
            s.push(num);
        }

        else if (command == "pop"){
            if(s.size()==0){
                result = -1;
                cout << result << endl;//cout은 출력스트림, endl은 줄바꿈
            }
            else {
                result=s.top();
                cout << result << endl;
                s.pop();
            }
        }

        else if (command == "size"){
            cout << s.size() << endl;
        }

        else if( command=="empty" ){
            if (s.size()==0){
                result=1;
                cout << result << endl;
            }
            else {
                result=0;
                cout << result << endl;
            }
        }

        else if (command == "top"){
            if (s.size()==0){
                result=-1;
                cout << result << endl;
            }
            else{
                result=s.top();
                cout << result << endl;
            }
        }
        
    }
    return 0;
}
