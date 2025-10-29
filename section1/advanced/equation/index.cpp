#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int num,num1 = 1,num2 = 1,num3 = 0;
    do{
        cout << "enter your num : ";
        cin >> num;

    }while(num < 2);
    cout << num3 << "\t" << num2 << "\t";
    for(int i = 2;i < num;i++){
        cout << num1 << "\t";
        num3 = num2;
        num2 = num1;
        num1 = num2 + num3;
    }

}
