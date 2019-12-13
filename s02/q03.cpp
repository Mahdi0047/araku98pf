//prints 2 diamonds

#include <iostream>

using namespace std;

int main()
{
    int rib;
    int outspace, inspace;
    inspace = -1;
    cin >> rib;

    if (rib >= 3 && rib <= 20){
        for (outspace = rib - 1; outspace >= 0; outspace--){
            for (int i = 1; i <= 2; i++){
                for (int j = 1; j <= outspace; j++){
                    cout << ' ';
                }
                if (outspace == rib - 1){
                    cout << '*';
                }else{
                    cout << '*';
                    for (int j = 1; j <= inspace; j++){
                        cout << ' ';
                    }
                    cout << '*';
                }
                for(int j = 1; j <= outspace; j++){
                    cout << ' ';
                }
                if(i == 1){
                    cout << ' ';
                }
            }
            inspace += 2;
            cout << endl;
        }
        inspace -= 4;
        outspace += 2;
        for (outspace; outspace <= rib - 1; outspace++){
            for (int i = 1; i <= 2; i++){
                for (int j = 1; j <= outspace; j++){
                    cout << ' ';
                }
                if (outspace == rib - 1){
                    cout << '*';
                }else{
                    cout << '*';
                    for (int j = 1; j <= inspace; j++){
                        cout << ' ';
                    }
                    cout << '*';
                }
                for (int j = 1; j <= outspace; j++){
                    cout << ' ';
                }
                if(i == 1){
                    cout << ' ';
                }
            }
            inspace -= 2;
            cout << endl;
        }
    }else{
        cout << "#\n";
    }

    //system("pause");
    //return 0;
}
