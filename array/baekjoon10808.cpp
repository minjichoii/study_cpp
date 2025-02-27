#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int alph[26] = {0};

    for (int i=0; i<s.length(); i++)
    {
        alph[s[i]-'a']+=1;
    }

    for (int i=0; i<26; i++) cout << alph[i] << " ";

}