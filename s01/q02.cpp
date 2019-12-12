#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    bool prime;
    //cout << "enter the minimum number: ";
    cin >> a;
    //cout << "enter the maximum number: ";
    cin >> b;

    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for (a; a <= b; a++){
        if (a != 1){
            prime = true;
            if (a == 2){
                cout << a << endl;
            }else {
                for (int i = 2; i <= sqrt(a); i ++){
                    if (a % i == 0){
                        prime = false;
                        break;
                    }
                }
                if (prime){
                    cout << a << endl;
                }
            }
        }
    }
    //system("pause");
    //return 0;
}
