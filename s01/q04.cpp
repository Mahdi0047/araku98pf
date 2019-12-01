#include <iostream>

using namespace std;

int main(){
    int number, sum;
    sum = 0;
    //cout << "enter desired number: ";
    cin >> number;
	
        for (int i = 1; i < number; i++){
            if (number % i == 0){
                sum += i;
            }
        }
        if (sum == number){
            cout << "YES";
        }else{
            cout << "NO";
        }
    //system("pause");
    //return 0;
}
