#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int bibaryToDismal(int binary){
    int dismal = 0;
    for(int i = 0;binary!=0;i++){
        dismal += (binary % 10) * pow(2,i);
        binary /= 10;
    }
    return dismal;

}

int main ()
{
    int binary;
    cout << "Enter your binary equation : ";
    cin >> binary;
    cout << "dismal equation is : " << bibaryToDismal(binary) << endl;


}
