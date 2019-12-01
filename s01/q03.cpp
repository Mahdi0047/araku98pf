#include <iostream>

using namespace std;

int main(){
    int rib;
    //cout << "enter Rib length: "
    cin >> rib;

    if(rib >= 1 && rib <= 10){
        for (int i = 1; i <= rib; i++){
            for (int j = 1; j<= rib; j++){
                if (((i==1) || (i==rib)) || ((j==1) || (j==rib))){
                    cout << "*";
                }else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }else{
        cout << "invalid!";
    }
    //system("pause");
    //return 0;
}
