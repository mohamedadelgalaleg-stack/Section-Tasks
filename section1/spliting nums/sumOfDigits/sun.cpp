#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int sum = 0,num;
    cout << "Enter your num : ";
    cin >> num;
    while(num != 0){
        sum += num%10;
        num /= 10;
    }
    cout << "Sum is : " << sum << endl;

}
