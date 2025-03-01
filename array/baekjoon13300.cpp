#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> female(6);
    vector<int> male(6);

    int s, g;
    for (int i=0; i<n; i++) {
        cin >> s >> g;
        if (s==0) female[g-1]++;
        else male[g-1]++;
    }

    int cnt=0;
    for(int i=0; i<6; i++){
        //ceil(female[i]/k와 같은결과임)
        cnt+=(female[i]+k-1)/k;
        cnt+=(male[i]+k-1)/k;
    }

    cout << cnt;
}