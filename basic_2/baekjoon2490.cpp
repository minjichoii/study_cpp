#include <iostream>

using namespace std;

int main() {
    int a;

    for (int i=0; i<3; i++){
        int sum=0;

        for (int i=0; i<4; i++){
            cin >> a;
            sum +=a ;
        }

        if (sum==1) cout << "C" << endl;
        else if(sum==2) cout << "B" << endl;
        else if(sum==3) cout << "A" << endl;
        else if(sum==4) cout << "E" << endl;
        else cout << "D" << endl;

    }
}
