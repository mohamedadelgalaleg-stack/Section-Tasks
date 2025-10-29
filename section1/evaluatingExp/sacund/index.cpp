#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int reamnder(int num){
    int result = 1;
    for(int i = 1;i <= num;i++)
        result *= i;
    return result;
}

int main ()
{
    float num,result = 0;
    do
    {
        cout << "enter your num : ";
        cin >> num;

    }
    while(num < 1);

    for(int i = 2; i <= 100; i+=2)
    {

        result += pow(num,i)*reamnder(i)*((i%4 == 0)?-1:1);
    }
    cout << "result is : " << result << endl;



}
