#include <iostream>

using namespace std;

    char toUp(char c){
        if (c >= 'a' && c <= 'z')
            c -= 'a' - 'A';
        return c;
    }

    char toLow(char c){
        if (c >= 'A' && c <= 'Z')
            c += 'a' - 'A';
        return c;
    }

int main()
{
    bool isSpace = false;
    int n;
    string s[11];

    cin >> n;

    getline(cin, s[0]);

    for (int i = 0; i < n; i++)
        getline(cin, s[i]);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < s[i].size(); j++){
            if (isSpace || j == 0){
                s[i][j] = toUp(s[i][j]);
                isSpace = false;
            }else{
                s[i][j] = toLow(s[i][j]);
            }

            if (s[i][j] == ' '){
                isSpace = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << s[i] << endl;
    //system("pause");
    //return 0;
}
