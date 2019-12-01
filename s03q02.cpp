#include <iostream>

using namespace std;

double fact(double n){
    double p = 1;
    for (double i = 1; i <= n; i++){
        p *= i;
    }
    return p;
}

double comb(double n, double m){
    return fact(n) / (fact(m) * fact(n - m));
}

double calc(double n){
    double p;
    double resault = 0;
        for (double i = 1; i <= n; i++){
            p = 1;
            for (double j = 1; j <= i; j++){
                p *= comb (i, j);
            }
            resault += p;
        }
        return resault;
}

int main()
{
    double n;
    cin >> n;
    cout << calc(n);
    //system("pause");
    //return 0;
}
