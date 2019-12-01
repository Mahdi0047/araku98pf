#include <iostream>

using namespace std;

bool isprime(int n){
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    bool firstprinted = false;
    cin >> a >> b;
    a++;
    for (a; a < b; a++){
        if (isprime(a)){
            if (firstprinted)
                cout << ',';
            else
                firstprinted = true;
            cout << a;
        }
    }
    //system("pause");
    //return 0;
}
