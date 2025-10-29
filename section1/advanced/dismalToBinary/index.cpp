#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main ()
{
    int binary = 0 , dismal;
    do{
        cout << "enter your num : ";
        cin >> dismal;
    }while(dismal < 0);
    for(int i = 0;dismal != 0;i++){
        binary += (dismal % 2) * pow(10,i);
        dismal /= 2;
    }
    cout << "binary equation is : " << binary << endl;
}
