#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main ()
{
    int dismal = 0,binary;
    cout << "Enter your binary equation : ";
    cin >> binary;
    for(int i = 0;binary!=0;i++){
        dismal += (binary % 10) * pow(2,i);
        binary /= 10;
    }
    cout << "dismal equation is : " << dismal << endl;


}
