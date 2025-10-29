#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int lines;
    do{
        cout<<"enter how many lines you want : ";
        cin >> lines;
    }while(lines < 0);
    for(int i = 1;i <= lines;i++){
        for(int o = 1;o <= i;o++)
            cout << "*";
        cout << endl;
    }

}
