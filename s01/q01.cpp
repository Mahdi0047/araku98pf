#include <iostream>

using namespace std;

int main(){
    int number, factorielle;
    factorielle = 1;
    //cout << "enter a number: ";
    cin >> number;
    for (number; number >= 1; number--){
        factorielle *= number;
    }
    cout << factorielle << endl;
    //system("pause");
    //return 0;
}
