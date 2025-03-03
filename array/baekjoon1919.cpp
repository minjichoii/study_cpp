#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int alph[26];
    fill(alph, alph+26,0);

    for (int i=0; i<s1.length(); i++){
        alph[s1[i]-'a']++;
    }

    for (int i=0; i<s2.length(); i++) alph[s2[i]-'a']--;


    int cnt=0;
    for (int i=0; i<26; i++){
        if (alph[i]>0) cnt+=alph[i];
        else if (alph[i]<0) cnt+=alph[i]*(-1);
    }

    cout << cnt;
}