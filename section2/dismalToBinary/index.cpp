#include<iostream>
#include<string>
#include<cmath>
using namespace std;

binaryToDiaml(int dismal){
    int binary = 0;
    for(int i = 0;dismal != 0;i++){
        binary += (dismal % 2) * pow(10,i);
        dismal /= 2;
    }
    return binary;

}

int main ()
{
    int dismal;
    do{
        cout << "enter your num : ";
        cin >> dismal;
    }while(dismal < 0);
    cout << "binary equation is : " << binaryToDiaml(dismal) << endl;
}
