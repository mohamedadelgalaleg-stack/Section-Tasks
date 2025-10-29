#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool angstrom(int num)
{

    int sum = 0,constant = num;
    while(num != 0){
        sum += pow(num %10 , 3);
        num /= 10;
    }
    cout << "sum of angstrom is : " << sum << endl;
    if(sum == constant)
            return true;
    else
        return false;

}

int main ()
{
    int num;
    cout << "Enter your num : ";
    cin >> num;
    num = abs(num);
    if(angstrom(num))
        cout<< "num is angstrom \n";
    else
        cout << "num is't angstrom \n";
}
