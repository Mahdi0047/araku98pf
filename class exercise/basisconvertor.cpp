#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num, base, decnum;
    decnum = 0;
    cin >> base >> num;
    for (int i = 0; num > 0; i++){
        decnum += pow(base, i) * (num % 10);
        num /= 10;
    }
    cout << decnum << endl;
    //system("pause");
    //return 0;
}
