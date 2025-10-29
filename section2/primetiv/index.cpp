#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool primrtiv(int num)
{
    for(int i = 2; ((i < num) || (num == 1)); i++)
        if(num % i == 0 || num == 1)
        {
            cout << "factor : " << i << endl;
            return false;
        }
    return true;

}

int main ()
{
    int num;
    cout << "Enter your num : ";
    cin >> num;
    num = abs(num);
    if(primrtiv(num))
        cout<< "is primrtiv \n";
    else
        cout << "num is't primetiv \n";
}
