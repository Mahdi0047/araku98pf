//sums n numbers

#include <iostream>

using namespace std;

void makespace (string &sum){
    string s;
    s.resize(sum.size() + 1);
    s[0] = '0';
    for (int i = 0; i < sum.size(); i++)
        s[i + 1] = sum[i];
    sum = s;
}

void add (string &sum, string num){
    if (sum.size() < num.size()){
        string temp = sum;
        sum = num;
        num = temp;
    }
    int temp;
    int i = sum.size() - 1;
    int j = num.size() - 1;
    while (i >= 0 && j >= 0){
        temp = ((int) sum[i] - '0') + ((int) num[j] - '0');
        sum[i] = (char) (temp % 10) + '0';
        if (temp >= 10){
            if(i == 0){
                makespace(sum);
                i++;
            }
            temp /= 10;
            temp += (int) sum[i - 1] - '0';
            sum[i - 1] = (char) temp + '0';
        }
        i--;
        j--;
    }
}

int main(){
    int count;
    string num, sum;

    cin >> count;
    cin >> num;

    sum = num;

    for (int i = 1; i < count; i++){
        cin >> num;
        add(sum, num);
    }
    cout << sum << endl;
    //system("pause");
    //return 0;
}
