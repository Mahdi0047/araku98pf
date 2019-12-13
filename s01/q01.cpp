//calculating factorial of a number

#include <iostream>

using namespace std;

int main(){
    int number, factorial;
    factorial = 1;
    //cout << "enter a number: ";
    cin >> number;
    for (number; number >= 1; number--){
        factorial *= number;
    }
    cout << factorial << endl;
    //system("pause");
    //return 0;
}
