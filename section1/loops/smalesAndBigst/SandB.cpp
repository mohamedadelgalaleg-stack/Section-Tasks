#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int input = -100 , smalest = INT_MAX , bigest = -100;
    do{
        if(!(input == -100))
            smalest = (smalest > input)?input:smalest;
        bigest = (bigest > input)?bigest:input;
        cout << "(Enter -99 to Exit)Enter your num : ";
        cin >> input;

    }while(input != -99);
    cout << "the smalest num is : " << smalest << "\t the bigest num is : " << bigest;


}
