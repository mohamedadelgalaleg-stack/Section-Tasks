#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int Pcount = 0,Ncount = 0,input = -1;
    while(input != 0){
        cout << "(enter 0 for Exiet)enter your num : ";
        cin >> input;
        if(input > 0)
            Pcount++;
        else if(input < 0)
            Ncount++;
        else
            break;
    }
    cout << "Posetiv counter is : " << Pcount << "\t nigativ counter is : " << Ncount;

}
