//converting decimal numbers and numbers with with bases under 10

#include <iostream>
#include <cmath>

using namespace std;

int todecimal(int num, int base){
    int decnum = 0;
    for (int i = 0; num > 0; i++){
        decnum += pow(base, i) * (num % 10);
        num /= 10;
    }
    return decnum;
}

int tootherbase(int num, int base){
    int numf = 0;

    for (int i = 0; num > 0; i++){
        numf += pow (10, i) * (num % base);
        num /= base;
    }
    return numf;
}

bool checkbase(int num, int base){
    while (num > 0){
        if (num % 10 > base){
            return true;
        }
        num /= 10;
    }
    return false;
}

int main(){
    int numi, numf, basei, basef;
    cout << "enter the base of initial number: ";
    cin >> basei;
    cout << "enter the initial number: ";
    cin >> numi;
    cout << "enter the base of final number: ";
    cin >> basef;

    if (basei > 10 || basei < 2 || basef > 10 || basei < 2 || checkbase(numi, basei)){
        cout << endl << "ERROR!" << endl;
        return 0;
    }

    numf = tootherbase(todecimal(numi, basei), basef);

    cout << endl << "the final number is: " << numf << endl;

    //system("pause");
    //return 0;
}
