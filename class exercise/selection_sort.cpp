//selection sort

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

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        //cahnge to if (num[i] < num[j]) for descending sort
            if (num[i] > num[j]){
                swap(&num[i], &num[j]);
            }

    cout << endl;

    for (int i = 0; i < n; i++)
        cout << num[i] << endl;
    //system("pause");
    //return 0;
}
