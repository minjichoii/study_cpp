#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n ;

    int zero=0;
    int min=0;

    int call=0;
    for (int i=0; i<n; i++) {
        cin >> call;
        
        zero += (call/30+1)*10;
        min += (call/60+1)*15;
    }

    if (min>zero) cout << "Y " << zero;
    else if(min==zero) cout << "Y" << " M " << min;
    else cout << "M " << min;
}