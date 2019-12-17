//getting stars and converting them to a dynamic array, casting grades into that array and saving them into a file

#include <iostream>
#include <fstream>

using namespace std;

int starcount(string s){
    int count = 0;

    for (int i = 0; i < s.size(); i++)
        if (s[i] == '*')
            count ++;

    return count;
}

int main(){
    float sum = 0;
    string s;
    float* grades;
    ofstream file;
    file.open("grades.txt");

    cin >> s;

    grades = new float[starcount(s)];

    for (int i = 0; i < starcount(s); i++)
        cin >> grades[i];

    cout << endl;

    for (int i = 0; i < starcount(s); i++){
        cout << grades[i] << endl;
        file << grades[i] << endl;
        sum += grades[i];
    }
    cout << "the avrage of the grades is: " << sum / starcount(s);

    file << "the avrage of the grades is: " << sum / starcount(s);

    file.close();
    //system("pause");
    //return 0;
}
