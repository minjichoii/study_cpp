#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s1, s2;
    int alph[26];
    bool isPossible;

    for (int i=0; i<n; i++){
        cin >> s1 >> s2;
        isPossible=true;
        fill(alph, alph+26, 0);
        for (int j=0; j< s1.length(); j++){
            alph[s1[j]-'a']++;//a면 26-26 인덱스0++
            alph[s2[j]-'a']--;
        }
        for (int j=0; j<26; j++){
            if (alph[j]!=0) {
                isPossible=false;
                break;
            }
        }
        if(isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}