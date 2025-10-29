#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int reversed = 0,num;
    cout << "Enter your num : ";
    cin >> num;
    while(num!=0){
        reversed *= 10;
        reversed += num % 10;
        num /= 10;
    }
    cout << "reversed is : " << reversed << endl;


}
