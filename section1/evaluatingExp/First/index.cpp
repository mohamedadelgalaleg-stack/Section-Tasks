#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main ()
{
    float num,result = 0;
    do
    {
        cout << "enter your num : ";
        cin >> num;
    }
    while(num < 1);

    for(int i = 1;i <= num;i++)
        result += 1.0/i;
    cout << "result is : " << result << endl;



    }
