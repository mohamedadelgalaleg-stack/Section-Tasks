#include<iostream>
#include<string>
using namespace std;

int main (){
    float clesDeg,fhrnDeg;
    cout << "enter Degre in clesues :";
    cin >> clesDeg;
    fhrnDeg = (9.0/5.0)*clesDeg + 32;
    cout << "degre in Fahren :" << fhrnDeg << endl;
    return 0;
}
