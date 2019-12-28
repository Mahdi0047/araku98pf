//finding count of numbers under n that are only made with 0 and 1

#include <iostream>

using namespace std;

unsigned long int pow(unsigned long int i, int j){
    unsigned long int p = 1;

    for(j; j >= 1; j--)
        p *= i;

    return p;
}

unsigned long int tobinary(unsigned long int num){
    unsigned long int numf = 0;

    for (int i = 0; num > 0; i++){
        numf += pow (10, i) * (num % 2);
        num /= 2;
    }
    return numf;
}

int main(){
    unsigned long int num, count;

    cin >> num;

    count = 1;

    while (tobinary(count + 1) <= num){
        count++;
    }

    cout << count << endl;
    //system("pause");
    //return 0;
}
