//converting number a to b basis and checking if sum of one in between digits are equal

#include <iostream>

using namespace std;

float pow(float i, int j){
    float p = 1;

    for(j; j >= 1; j--)
        p *= i;

    return p;
}

int baseconv(int num, int base){
    int numf = 0;

    for (int i = 0; num > 0; i++){
        numf += pow (10, i) * (num % base);
        num /= base;
    }
    return numf;
}

int main(){
    int num, base, sum1, sum2;

    sum1 = 0;
    sum2 = 0;

    cin >> num;
    cin >> base;

    num = baseconv(num, base);

    for (int i = 0; num > 0; i++){
        if (i % 2){
            sum1 += num % 10;
        }else{
            sum2 += num % 10;
        }
        num /= 10;
    }

    if (sum1 == sum2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    //system("pause");
    //return 0;
}
