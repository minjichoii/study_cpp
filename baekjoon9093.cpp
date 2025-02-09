#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    string sentence;
    stack <char> temp;

    while(n--)
    {
        getline(cin, sentence);
        sentence += ' ';

        for (int i=0; i<sentence.size(); i++)
        {
            if (sentence[i]==' ')
            {
                while (!temp.empty())
                {
                    cout << temp.top();
                    temp.pop();
                }cout << ' ';
            }
            else
                temp.push(sentence[i]);
        }cout << "\n";
    }
}