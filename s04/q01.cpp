#include <iostream>
#include <iomanip>

using namespace std;

int pow(int i, int j){
    int p = 1;

    for(j; j >= 1; j--)
        p *= i;

    return p;
}

int main()
{
    int n;
    float num, sum, max, min;

    cin >> n;
    cin >> num;
    max = num;
    min = num;
    sum = num;

    for (int i = 1; i < n; i++){
        cin >> num;

        sum += num;

        if (num < min)
            min = num;

        if (num > max)
            max = num;
    }

    cout << "Max: " << fixed << setprecision(3) << max << endl << "Min: " << fixed << setprecision(3) << min << endl << "Avg: " << fixed << setprecision(3) << sum / n << endl;

    //system("pause");
    //return 0;
}
