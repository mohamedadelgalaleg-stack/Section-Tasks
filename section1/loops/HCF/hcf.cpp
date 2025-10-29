#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int a,b,HCF = 1;
    cout << "enter your nums \n";
    cin >> a >> b;
    for(int i = (a > b)?a:b;i > 1;i--){
        if((a % i == 0)&&(b % i == 0)){
            HCF = i;
            break;
        }
    }
    cout << "the HCF is : " << HCF;

}
