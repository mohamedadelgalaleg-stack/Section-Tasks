#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main ()
{
    int lines,spaces;
    do
    {
        cout<<"enter how many lines you want : ";
        cin >> lines;
    }
    while(lines < 0);

    spaces = lines;
    for(int i = 1; i <= lines; i++)
    {
        spaces--;
        for(int sp = 0; sp < spaces; sp++)
        {

            cout << " ";
        }

        for(float o = 1; o <= i; o+=0.5)
        {
            cout << i;
        }
        cout << endl;

    }

}
