//solves quadratic equation

#include <iostream>
#include <iomanip>

using namespace std;

float pow(float i, int j){
    float p = 1;

    for(j; j >= 1; j--)
        p *= i;

    return p;
}

int digitCount(float f){
    int n = f;
    int d = 1;

    for (d; pow(10, d) < n; d++);

    return d;
}

float sqr(float f){
    float sqr = 0;
    if (f == 0){
        return 0;
    }else{
        float i = pow(10, digitCount(f)) - 1;
        while (i > 0.000001){
            while (pow(sqr + i, 2) <= f){
                if(pow(sqr + i, 2) == f){
                    sqr += i;
                    break;
                }
                sqr += i;
            }
            i /= 10;
        }
    }
    return sqr;
}

int main()
{
    float a, b, c, d ,ans;

    cin >> a >> b >> c;

    if (a != 0){
        d = pow(b, 2) - (4.0 * a * c);

        if (d > 0){
            ans = (-b - sqr(d)) / (2.0 * a);
                cout << fixed << setprecision(3) << ans << endl;
            ans = (-b + sqr(d)) / (2.0 * a);
                cout << fixed << setprecision(3) << ans << endl;
        }else if (d == 0){
            ans = -b / (2.0 * a);
            if (ans == 0)
                ans *= -1.0;
                cout << fixed << setprecision(3) << ans << endl;
        }else{
            cout << "IMPOSSIBLE\n";
        }
    }else if (a == 0 && b != 0) {
        ans = -c / b;
            cout << fixed << setprecision(3) << ans << endl;
    }else if (a == 0 && b == 0) {
        cout << "IMPOSSIBLE\n";
    }

    //system("pause");
    //return 0;
}
