//bubble sort

#include <iostream>

using namespace std;

void swap(int* i, int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(){
    int n;
    cin >> n;
    int* num;
    num = new int[n];

    cout << endl;

    for (int i = 0; i < n; i++)
        cin >> num[i];

    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
        //cahnge to if (num[j] < num[j + 1]) for descending sort
            if (num[j] > num[j + 1]){
                swap(&num[j], &num[j + 1]);
            }

    cout << endl;

    for (int i = 0; i < n; i++)
        cout << num[i] << endl;
    //system("pause");
    //return 0;
}
