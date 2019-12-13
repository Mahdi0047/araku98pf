//prints woo...oow with certain amount of 'o's

#include <iostream>

using namespace std;

int main()
{
    int data;
    cin >> data;
    cout << "W";

    for(int i = 1; i <= data; i++){
        cout << "o";
    }

    cout << "w!\n";

    //system("pause");
    //return 0;
}
