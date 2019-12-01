#include <iostream>

using namespace std;

int factorial(int num){
    int p = 1;
    for (int i = 1; i <= num; i++){
        p *= i;
    }
    return p;
}

int comb(int n, int m){
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            cout << comb(i, j) << ' ';
        }
        cout << "\n\n";
    }
    //system("pause");
    //return 0;
}
