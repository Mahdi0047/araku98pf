/*changes yymm birth date to:
*saal: yy
*mah: mm
*/

#include <iostream>

using namespace std;

int main()
{
    string date;
    cin >> date;

    if (date.length() == 4){
        cout << "saal:" << date[0] << date[1] << endl << "maah:" << date[2] << date[3] << endl;
    }else{
        cout << "invalid!\n";
    }

    //system("pause");
    //return 0;
}
