#include <iostream>

using namespace std;

int main()
{
    int num[2][10];
    int mode = 0;
    int modecheck = 1;
    int counter = 1;
    int count;
    bool checked;

    for (int i = 0; i < 10; i++){
        cin >> num[0][i];
        num [1][i] = 0;
    }

    for (int i = 0; i < 9; i++){
        for (int j = i + 1; j < 10; j++){
            if (num[0][i] == num[0][j]){
                if (num[1][i] == 0){
                    mode++;
                    num[1][i] = mode;
                }
                num[1][j] = num[1][i];
            }
        }
    }

    cout << "Repeat: ";

    if (mode == 0){
        cout << "Not Found\n";
    }else{
        for (int i = 0; i < 10; i++){
            if (num[1][i] == modecheck){
                cout << num[0][i] << "\t";
                modecheck++;
            }
        }
        cout << endl;

        for (int i = 0; i < 10; i++){
            if (num[1][i] == counter){
                count = 0;
                cout << num[0][i] << ": ";
                for (int j = 0; j < 10; j++){
                    if (num[1][j] == counter){
                        count++;
                    }
                }
                cout << count << endl;
                counter++;
            }
        }
    }
    //system("pause");
    //return 0;
}
