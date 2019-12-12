#include <iostream>
#include <iomanip>

using namespace std;

bool compare(string name, string pname){
    for (int i = 0; i < pname.size(); i++){
        if (pname[i] >= 'A' && pname[i] <= 'Z'){
            if (name[i] >= 'a' && name[i] <= 'z' && pname[i] != name[i] - ('a' - 'A'))
                return false;
            if (name[i] >= 'A' && name[i] <= 'Z' && pname[i] != name[i])
                return false;
        }else{
            if (name[i] >= 'a' && name[i] <= 'z' && pname[i] != name[i])
                return false;
            if (name[i] >= 'A' && name[i] <= 'Z' && pname[i] != name[i] + ('a' - 'A'))
                return false;
        }
    }
    return true;
}

int main(){
    string pname, name;
    int count, pcount;
    float grade, sum;
    sum = 0;
    pcount = 0;
    cout << "enter the count of students: ";
    cin >> count;
    cout << "enter the particular name: ";
    cin >> pname;

    for (int i = 1; i <= count; i++){
        cout << "enter the name of the student number " << i << ": ";
        cin >> name;
        cout << "enter the grade of the " << name << ": ";
        cin >> grade;
        if (compare(name, pname)){
            cout << "added!\n";
            pcount++;
            sum += grade;
        }
    }

    cout << "the average of grades of students with name of " << pname << " is: " << fixed << setprecision(2) << sum / pcount << endl;
    //system("pause");
    //return 0;
}
