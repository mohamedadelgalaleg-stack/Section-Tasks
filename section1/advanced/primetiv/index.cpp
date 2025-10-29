#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main ()
{
    int num;
    cout << "Enter your num : ";
    cin >> num;
    num = abs(num);
    for(int i = 2;((i < num) || (num == 1));i++)
        if(num % i == 0 || num == 1){
            cout << "num is't primetiv \n";
            cout << "factor : " << i << endl;
            return 0;
        }
    cout<< "is primrtiv \n";



}
